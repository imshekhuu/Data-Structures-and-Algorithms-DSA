# Check_if_a_Number_is_Palindrome
# num = int(input('enter your num: '))
num = 1254
result = 0
while num > 0:
    aplha = num % 10
    result = (result*10)+aplha
    num = num // 10

if  result == num:
    print ('Palindrome')
else:
    print(' Not Palindrome')