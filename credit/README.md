Credit Card Validation Program
Problem to Solve
This project implements a credit card validation program in C. The goal is to determine the validity of a credit card number based on the card's checksum using Luhn’s Algorithm. The program supports American Express, MasterCard, and Visa card numbers, and it provides feedback on whether the number is valid and which type of card it belongs to.

Credit Cards
Credit cards use long numbers for unique identification, and each type of card has a specific number structure:

American Express: 15-digit numbers starting with 34 or 37.
MasterCard: 16-digit numbers starting with 51, 52, 53, 54, or 55.
Visa: 13- or 16-digit numbers starting with 4.
In addition, credit card numbers include a checksum to help prevent mistakes or fraud when entering the number.

Luhn’s Algorithm
Luhn’s Algorithm is a simple checksum formula used to validate a variety of identification numbers, including credit cards. The steps are:

Multiply every other digit of the number by 2, starting from the second-to-last digit.
Add the sum of the products’ digits.
Add the sum of the digits that weren’t multiplied by 2.
If the total’s last digit is 0, the card number is valid.
For example, given the Visa card number 4003600000000014, the algorithm determines that the card is valid.

Implementation
The program is implemented in a file called credit.c and takes a credit card number as input from the user. It checks the card number against the structure of known cards (American Express, MasterCard, and Visa) and applies Luhn’s Algorithm to validate it. The output will indicate whether the card is valid and, if so, which company issued the card.

Sample Output
$ ./credit
Number: 4003600000000014
VISA
If the number is invalid or not formatted correctly:
$ ./credit
Number: 6176292929
INVALID
Usage
Compile the program using make or gcc:
make credit
Or:

gcc -o credit credit.c
Run the program:

./credit
Input a credit card number when prompted.

Features
Detects American Express, MasterCard, and Visa cards.
Validates credit card numbers using Luhn’s Algorithm.
Outputs the type of card or INVALID if the card number is not valid.
Testing
You can test the program with valid card numbers from different companies, such as:

Visa: 4003600000000014
MasterCard: 5105105105105100
American Express: 378282246310005
The program also handles invalid input, such as numbers that don’t match the format of a credit card.

Credit
This project is inspired by CS50’s Problem Set, specifically focusing on credit card validation.

