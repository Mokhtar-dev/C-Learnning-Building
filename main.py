import hashlib

def hash_text_sha256(text):
    """
    Takes a text string and returns its SHA256 hash.
    
    Args:
        text (str): The text to hash
        
    Returns:
        str: The hexadecimal SHA256 hash of the input text
    """
    hash_object = hashlib.sha256(text.encode())
    return hash_object.hexdigest()


# Example usage
if __name__ == "__main__":
    user_input = input("Enter text to hash: ")
    hashed = hash_text_sha256(user_input)
    print(f"Original text: {user_input}")
    print(f"SHA256 hash: {hashed}")
