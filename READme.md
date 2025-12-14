Credit Card Validator (C++)
Overview

A C++ console application that validates credit card numbers using the Luhn Algorithm.
Supports variable-length cards (13–19 digits) and handles invalid input, exit signals, and card termination signals.

Features

Supports Visa, MasterCard, AmEx, and other standard card lengths

Handles input digit by digit

Validates credit card number using Luhn Algorithm

Detects invalid digits and invalid card length

Exit the program anytime with -1

End current card input with -2

How to Use

Clone the repository:

git clone <your-repo-url>


Compile the program:

g++ credit_card_validator.cpp -o validator


Run the program:

./validator


Input digits one at a time:

Enter -2 to finish entering a card number

Enter -1 to exit the program

Example input:

4 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 -2

Output Example
Enter your credit card number (to end enter -2):
4 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 -2
The credit card number is valid

Algorithm Used

Luhn Algorithm (Mod 10 checksum):

Starting from the right, double every second digit

If doubling > 9, subtract 9

Sum all digits

If total modulo 10 is 0 → valid

Notes

Only accepts digits 0–9

Card length must be 13–19 digits

Test numbers are for learning purposes only

Future Improvements

Detect card type (Visa, MasterCard, AmEx)

String-based input

Batch validation from file

GUI or CLI interface for better UX