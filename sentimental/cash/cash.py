from cs50 import get_float
while True:
    dollars = get_float("change: ")
    if dollars > 0:
        break
cents = round(dollars * 100)
def calculate_quarters(n):
    quarters =0
    while n >= 25:
        quarters +=1
        n -= 25
    return quarters
quarters=calculate_quarters(cents) 
cents -= quarters * 25
def calculate_dimes(n):
    dimes = 0
    while n >= 10:
        dimes +=1
        n -= 10
    return dimes
dimes = calculate_dimes(cents)
cents -= dimes * 10
def calculate_nickels(n):
    nickels = 0
    while n >= 5:
        nickels +=1
        n = n - 5
    return nickels
nickels = calculate_nickels(cents)
cents -= nickels * 5
def calculate_pennies(n):
    pennies = 0
    while n >= 1:
        pennies +=1
        n = n - 1
    return pennies
pennies = calculate_pennies(cents)
cents -= pennies *1
total = quarters + dimes + nickels + pennies
print(f"{total}")    