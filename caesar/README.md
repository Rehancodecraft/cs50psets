Caesar Cipher
Problem to Solve
This project implements Caesar's cipher, an ancient encryption technique that shifts each letter in a message by a certain number of positions. This system is based on the idea that only Caesar and the recipients know the secret shift key used for encrypting and decrypting the message.

For example, with a shift of 1, "HELLO" becomes "IFMMP". The recipient can then reverse the process to retrieve the original message by shifting the letters back by the same key.

Caesar Cipher Algorithm
Caesar's cipher works by shifting each letter of the plaintext by a fixed number of positions, determined by the key. The alphabet wraps around, so after 'Z', the next letter is 'A'.

To illustrate the process:

Plaintext: HELLO
Key: 1
Ciphertext: IFMMP
The formula to calculate the new character is:

makefile
Copy code
ciphertext = (plaintext + key) % 26
Where plaintext represents the letter's position in the alphabet (A = 0, B = 1, ..., Z = 25), and the result wraps around if necessary.

Implementation
The program is implemented in a file called caesar.c, which prompts the user for a key and a plaintext message. It then outputs the encrypted message (ciphertext) by applying the Caesar cipher using the provided key.

Features
The user provides a key via command-line arguments.
The program accepts a non-negative integer as the key.
The program handles errors for missing or invalid keys.
Case sensitivity is preserved: uppercase letters remain uppercase, and lowercase letters remain lowercase.
Non-alphabetical characters remain unchanged.
The program works for any non-negative integer key, not limited to 26.
Sample Usage
$ ./caesar 1
plaintext:  HELLO
ciphertext: IFMMP
If an invalid input is provided, such as missing the key or providing non-numeric input, the program outputs an error message:
$ ./caesar
Usage: ./caesar key
Input/Output Specifications
Command-line arguments: The program must be executed with a single command-line argument, which is the non-negative integer key.
Plaintext input: The program will prompt for a string of plaintext and encrypt it using the provided key.
Ciphertext output: The program will output the encrypted text (ciphertext) based on Caesar's cipher.
Error Handling
If no command-line argument is provided, or if more than one argument is provided, the program will print an error and exit with status 1.
If the key contains any non-numeric characters, the program will display a usage message: Usage: ./caesar key.
Exit Status
The program exits with a status of 0 upon successful encryption.
It returns a status of 1 in case of an error (e.g., invalid key or incorrect number of arguments).
How to Compile
To compile the program, use the following command:
make caesar
Alternatively, use gcc:
gcc -o caesar caesar.c
How to Run
After compiling the program, run it with a valid key as a command-line argument:
./caesar <key>
Then, provide a plaintext message when prompted, and the program will output the corresponding ciphertext.

