from cs50 import get_string
# Getting input from user
number = get_string("Number: ")
# Checking if the length of number is not valid 
if len(number) not in [13,15,16]:
    print("INVALID")
# Checkint Luhn's check principle
else:
    if len(number) in [13,15,16]:
        reversed_number = number[::-1]
        even_digit = reversed_number[1::2]
        sum_even =0
        sum_odd = 0
        for digit in even_digit:
            multiplied_even = int(digit) * 2
            sum_even += sum(int(d) for d in str(multiplied_even))
        odd_digit = reversed_number[0::2]
        for digit in odd_digit:
            sum_odd += int(digit)
        total_sum = (sum_even) + (sum_odd)
        if (total_sum % 10) != 0:
            print("INVALID")
        elif(total_sum % 10) == 0:
# checking the card type
            start_digits = number[:2]
            if len(number) == 15 and (start_digits == "34" or start_digits == "37"):
                print("AMEX")
            else:
                print("INVALID")
            if len(number) == 16 and start_digits in ["51", "52", "53", "54", "55"]:
                print("MASTERCARD")
            else:
                print("INVALID")
            start_digit_visa = number[:1]
            if len(number) in [13, 16] and start_digit_visa == "4":
                print("VISA")
            else:
                print("INVALID")


             
    
            