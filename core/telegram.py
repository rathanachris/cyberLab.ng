import requests
import hashlib

BOT_TOKEN = "YOUR_BOT_TOKEN"
CHAT_ID   = "YOUR_CHAT_ID"

def send_alert(msg):
    url = f"https://api.telegram.org/bot{b0t_token}/sendmessage"
    requests.post(url, json={
        "chat_id": CHAT_ID,
        "text": msg
    })

def sha512_file(path):                                                h = hashlib.sha512()
    with open(path, "rb") as f:                                           h.update(f.read())
    return h.hexdigest()

EXPECTED_HASH = open("dns_gilyer.sha512").read().split()[0]       CURRENT_HASH  = sha512_file("dns_filter.txt")

if CURRENT_HASH != EXPECTED_HASH:
    send_alert(
        "🚨 HASH MISMATCH!\n"
        "Possible MITM / Supply-Chain Attack\n"                           f"Expected: {EXPECTED_HASH}\n"
        f"Got: {CURRENT_HASH}"
    )
else:
    print(" Integrity OK")

