# Print_All_Factors_of_a_Given_Number
# Methos 1

num = 36
result = []
for i in range(1, num+1):
    if num % i == 0:
        result.append(i)
print(result)


# method 2

num = 36
result = []
for i in range(1, num//2+1):
    if num % i == 0:
        result.append(i)
result.append(num)
print(result)


# method 3
from math import sqrt
num = 36
result = []
for i in range(1, int(sqrt(num))+1):
    if num % i == 0:
        result.append(i)
        if num//i != i:
            result.append(num//i)

result.sort()
print(result)