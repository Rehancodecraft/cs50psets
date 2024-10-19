Readability
Problem Description: 
This project implements a Python program that calculates the readability grade level of a given text using the Coleman-Liau formula. The goal is to determine the reading grade level for a block of text, such as whether it is suitable for a first-grader or a high school senior.

The Coleman-Liau index is computed as:
index = 0.0588 × 𝐿 − 0.296 × 𝑆 − 15.8
Where:

L = Average number of letters per 100 words in the text
S = Average number of sentences per 100 words in the text
Program Details
Filename: readability.py
Directory: sentimental-readability
Input: The program prompts the user to enter a block of text.
Output: The program calculates and prints the grade level of the text.
If the calculated grade level is:

Less than 1, it prints Before Grade 1
Greater than or equal to 16, it prints Grade 16+
Otherwise, it prints Grade X, where X is the calculated grade level.
How to Run
Open the terminal and navigate to the folder sentimental-readability.
Run the program using the following command:
bash
Copy code
python readability.py
When prompted, type or paste a block of text and press Enter. The program will output the readability grade level.
Example Inputs and Outputs
Input: One fish. Two fish. Red fish. Blue fish.

Output: Before Grade 1
Input: Would you like them here or there? I would not like them anywhere.

Output: Grade 2
Input: Congratulations! Today is your day. You're off to Great Places!

Output: Grade 3
Input: Harry Potter was a highly unusual boy in many ways...

Output: Grade 5
Testing the Program
To verify the correctness of the program, run it with various text inputs and compare the output with expected results. The program has been tested with texts from different grade levels to ensure accurate calculation.

How It Works
The program performs the following steps:

Count Letters: Counts all alphabetic characters (A-Z, a-z).
Count Words: Considers any sequence of characters separated by spaces as a word.
Count Sentences: Counts the number of sentences based on punctuation marks like ., !, and ?.
Calculate the Coleman-Liau Index: Uses the formula to calculate the index and rounds it to the nearest integer.
Print Result: Outputs the corresponding grade level.
