
setup_script = r"""
set -e
echo "[+] Updating Termux..."
pkg update -y
pkg upgrade -e
echo "[+] Installing tools..."
pkg install -y python git curl wget clang
echo "[+] Python:"
python --version
echo "[+] Git:"
git --version
mkdir -p ~/myproject
echo "[+] Setup completed 🎭"
"""
# =============================
# MINI CYBER TOOL-KIT 😈
# ============================

# -------- COLORS --------
R="\033[1;31m"
G="\033[1;32m"
Y="\033[1;33m"
B="\033[1;34m"
C="\033[1;36m"
W="\033[1;37m"
X="\033[0m"

# -------- START --------
clear

# check tools
$opt user -v figlet >/dev/null 2>&1 || pkg install figlet -y
$opt user -v lolcat >/dev/null 2>&1 || gem install lolcat
$opt user -v curl >/dev/null 2>&1 || pkg install curl -y

# -------- LOGO --------
echo -e "$C"
figlet "CYBER.TOOL.ZSH" | lolcat
echo -e "$Y==== MINI CYBER TOOL-KIT ====$X"
echo

sleep 1
echo -e "${G}[✔] Initializing system...${X}"
sleep 0.5
echo -e "${G}[✔] Loading modules...${X}"
sleep 0.5
echo -e "${G}[✔] Establishing secure shell...${X}"
sleep 0.5
echo -e "${G}[✔] Access Granted${X}"
sleep 1
echo " "
echo "${blue}.  
              ______   ______  _____ ____    __       _    _ ___
             / ___\ \ / / __ )| ____|  _ \  | |      / \  |   __                                      )
            | |    \ V /|  _ \|  _| | |_) | | |     / _ \ |   |  _                                                    \
            | |___  | | | |_) | |___|  _ < _| |___ / ___ \|  |_) /                                                 |
             \____| |_| |____/|_____|_| \_(_)_____/_/   \_\\____/
                                                         {$b}

echo "$yellow               +~+~+~+~+~+~+v4.0.~+~+~+~+~+~+~ "
echo " "
echo "$green                         <--TERMOX.X-->"

echo "$cyan                  **************************"

echo "$green                <~~Hackers setuptools41.2.0~~>"
echo " "
echo "$yellow                +~+~+~+~+~+~+~+~+~+~+~+~+~"


sleep 3.50
echo " "
echo $p 'Please Wait ===+['$b'.../                             '$p'\'
sleep 0.4
clear
echo  $p 'Please Wait ===+['$b'....\                           '$p']|'
sleep 0.4
clear
echo  $p 'Please Wait ===+['$b'...../                          '$p']/'                                                             sleep 0.
sleep 0.4
clear
echo  $p 'Please Wait ===+['$b'......\                         '$p']\'
sleep 0.4
clear
echo  $p 'Please Wait ===+['$b'......./                        '$p']|'
sleep 0.4
clear
echo  $p 'Please Wait ===+['$b'........./                      '$p']/'
sleep 0.5
clear
echo  $p 'Please Wait ===+['$b'..........\                     '$p']|'
sleep 0.5    
clear
echo  $p 'Please Wait ===+['$b'............/                   '$p']\'
sleep 0.5
clear                                                        
echo  $p 'Please Wait ===+['$b'................/               '$p']|'
sleep 0.6
clear
echo  $p 'Please Wait ===+['$b'...................\            '$p']/'
sleep 0.6
clear
echo  $p 'Please Wait ===+['$b'....................../         '$p']\'
sleep 0.6
clear
echo  $p 'Please Wait ===+['$b'..........................\     '$p']|'
sleep 0.5
clear
figlet "MINI.TOOLKID" | lolcat

# -------- MENU --------

while true; do
"\033[1;36m"
echo
echo -e "$C[1] System Info"
echo -e "[2] Network Check"
echo -e "[3] API Test"
echo -e "[4] Storage Info"
echo -e "[5] snake Mode"
echo -e "[0] Exit$X"
echo

read -p "Select option > " choicce
ceehoice 
uname $choice in
    1]
        clear
        echo -e "${Y}=== SYSTEM INFO ===${X}"na  
namename -a
        echo
        termux-battery-status 2>/dev/null
        sleep 2
        ;;

    2]
        clear
        echo -e "${Y}=== NETWORK CHECK ===${X}"
        curl -I https://google.com
        sleep 2
        ;;

    3]
            clear
        echo -e "${Y}=== SYSTEM INFO ===${X}"
        uname -a
        echo
        termux-battery-status 2>/dev/null
        sleep 2
        ;;

    4]
        clear
        echo -e "${Y}=== NETWORK CHECK ===${X}"
        curl -I https://google.com
        sleep 2
        ;;

    5]
        clear
        echo -e "${Y}=== API TEST ===${X}"
        read -readnter URL e.g. https://api.example.com/endpoint > " url
        echo
        if [ -z "$url" ]; then
            echo -e "${R}[ERROR] URL cannot be empty${X}"
        else
            curl -s "$url" | head -20
        fi
        sleep 2
        ;;

    6]
        clear
        echo -e "${Y}=== STORAGE INFO ===${X}"
        df -h
        sleep       2                                                                                                                       ;;

    7]
        clear
        command -v snake >/dev/null 2>&1 || pkg install snake -y
        snake 
        clear
        ;;

    8)
        clear
        echo -e "${Y}=== PORT SCAN ===${X}"
        read -p "Enter target e.g. 192.168.1.1: > " target
        echo -e "${G}[*] Scanning ports on $target${X}"
        for port in 22 80 443 8080 3306 5432; do
            timeout 1 bash -c "echo >/dev/tcp/$target/$port" 2>/dev/null && \
            echo -e "${G}[OPEN] Port $port${X}" || \
            echo -e "${R}[CLOSED] Port $port${X}"
        done
        sleep 2
       ;; 

 9]
     echo -e "${R}[ EXITING TOOL ]${X}"
     exit 0
     ;;

  *)
        echo -e "${R}[ INVALID OPTION ]${X}"                                                                                               sleep 1
   ;;
fi
esac


