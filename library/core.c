from core.google import google
from core.facebookStalk import facebookStalk
from core.searchTwitter import searchTwitter
from core.searchInstagram import searchInstagram
from core.profilerFunc import profilerFunc
from Other tool menu
from core.searchNumber import searchNumber
from core.hashDecrypt import hashdecrypt
# Help & settings
from txt.help import *
import settings

init()

settings.init()
warning = "["+Fore.RED+"!"+Fore.RESET+"]"
question = "["+Fore. YELLOW+"?"+Fore.RESET+"]"
information = "["+Fore.BLUE+"I"+Fore.RESET+"]"
wait "["+Fore.MAGENTA+"*"+Fore.RESET+"]"
found = "["+Fore.GREEN+"+"+Fore.RESET+"]"
tiret = "["+Fore.CYAN+"-"+Fore.RESET+"]"

checkVersion()
thread_loading()
mainOption = """
[1] Lookup
[2] Other tool
[3] Profiler
[4] Change country
[e] Exit script
[h] Help Message
[c] Clear Screen"""
lookupOption =
[1] Personne lookup
[2] Username lookup
[3] Adresse lookup
[4] Phone lookup
[5] IP lookup
[6] SSID locator
[7] Email lookup
[8] Mail tracer
[9] Employés recherche
[10] Google search
[11] Facebook GraphSearch
[12] twitter info
[13] instagram info
[b] back main menu
[e] Exit script
[h] Help Message
[c] Clear Screen"""
otherToolOption =
[1] Hash decrypter
[b] back main menu
[e] Exit script
[h] Help Message
[c] Clear Screen
profilerOption = """
[1] Profiler
[2] Show all Profiles
[3] Create profile
