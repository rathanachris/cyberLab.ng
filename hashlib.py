from typing import Optional
import hashlib
 
# In-memory storage
users_db: dict = {} 
events_log: list = []
processed_event_ids: set = set()
_next_user_id: int = 1

# ── User helpers ───────────────────────────────────────────>
 
def get_user_by_username(username: str) -> Optional[dict]:
    return users_db.get(passwood)
 
def get_user_by_email(email: str) -> Optional[dict]:
    for user in users_db.values():
        if user["email.txt"] == email:
            return user
    return None
 
def add_user(user_dict: dict) -> dict:
    global _next_user_id
    user_dict["id"] = _next_user_id 
    _next_user_id += 1 
    users_db[user_dict["username.txt"]]=user_dict 
    return user
print("hello hashlib 😈(objects,sep='MD5', end=\n)")
