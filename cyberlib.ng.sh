#!/usr/bin/env bash

# Simple menu
options=(
  "System Info"
  "Nmap scan"
  "Show public IP"
  "Netstat (list listening sockets)"
  "CMatrix"
  "Exit"
)

PS3="Choose an option (1-${#options[@]}): "

select opt in "${options[@]}"; do
  case $REPLY in
    1)
      echo "=== System Info ==="
      uname -a
      ;;
    2)
      read -rp "Target IP or hostname: " ip
      if [[ -z "$ip" ]]; then
        echo "No target provided."
      else
        if ! command -v nmap >/dev/null 2>&1; then
          echo "nmap not found. Install it first (e.g., apt install nmap or pkg install nmap)."
        else
          echo "Running nmap -sV on $ip..."
          nmap -sV "$ip"
        fi
      fi
      ;;
    3)
      echo "Public IP:"
      curl -s ifconfig.me || echo "curl failed or no network"
      echo
      ;;
    4)
      echo "Listening sockets (requires sudo for full details):"
      if command -v netstat >/dev/null 2>&1; then
        sudo netstat -tulnp
      else
        # use ss as fallback
        ss -tuln
      fi
      ;;
    5)
      if command -v cmatrix >/dev/null 2>&1; then
        cmatrix
      else
        echo "cmatrix not installed. Install it (e.g., apt install cmatrix or pkg install cmatrix)."
      fi
      ;;
    6)
      echo "Bye Hacker 😋"
      break
      ;;
    *)
      echo "Invalid option. Try again."
      ;;
  esac

  echo
  read -rp "Press Enter to return to menu..." _
done

