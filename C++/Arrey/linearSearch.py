def linearSearch(arr, size, key):
    for i in range(0, size):
        if ( arr[i] == key):
            return i
    return -1

arr = []
for i in range(0,10):
    arr.append(int(input()))

lidexvalue= linearSearch(arr, 10, 5)

if indexvalue == -1:
    print("value not exist")
else:
    print("here is the index value of that arr: ", lidexvalue)


