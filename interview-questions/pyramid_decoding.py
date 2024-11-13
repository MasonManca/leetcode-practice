def decode(message_file):
    try:
        with open(message_file, 'r') as file: # open the file for reading
            # Split each line into a list of words
            decoded_words = [line.strip().split()[1:] for line in file] 
            # Join the words into a single string
            decoded_message = ' '.join(word for sublist in decoded_words for word in sublist)
            return decoded_message
    except FileNotFoundError:
        # If the file is not found, print an error message
        print(f"Error: File '{message_file}' not found.")
        return None

# Filename of the encoded message
# Original filname: 'coding_qual_input.txt'
message_file = 'encoded_message.txt'
decoded_message = decode(message_file)

# Ensure the message was decoded successfully before printing
if decoded_message is not None:
    print(decoded_message)