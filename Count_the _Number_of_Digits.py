# DSA in Python Course - Count the Number of Digits in an Integer
count = 0
num = int(input("enter your number: "))
while num >0:
    count += 1
    num = num // 10

print(count)


# Method -2 
from math import *
def count_number(num):
    return int(log10(num) + 1)

print(count_number(num))