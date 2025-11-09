# Store_Frequency_in_Dictionary

# method 1

num = [2, 3, 5, 2, 1, 3, 4, 5, 5,3 ,2 ,3 ,3, 4,2, 6,6,6, 6,4, 2,8, 3,3,7,2]
x = 3
result = {}
for i in range(0, len(num)):
    if num[i] in result:
        result[num[i]] += 1
    else:
        result[num[i]] = 1
print(result[x])


# method 2 - advance
num = [2, 3, 5, 2, 1, 3, 4, 5, 5,3 ,2 ,3 ,3, 4,2, 6,6,6, 6,4, 2,8, 3,3,7,2]
result = dict()
n = len(num)
x = 2

for i in range(0, n):
    result[num[i]] = result.get(num[i], 0)+1
print(result[x])
