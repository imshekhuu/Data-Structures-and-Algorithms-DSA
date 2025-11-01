# DSA in Python - Extraction of Digits Using Loops

num = int(input("enter the number: "))
while num > 0:
    last_digit = num % 10
    print(last_digit)
    num = num // 10