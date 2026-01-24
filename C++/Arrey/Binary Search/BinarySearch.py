def Binarysearch(arr, size, key):
    start = 0
    end = size -1
    mid = start + (end-start)/2
    while(start <= end):
        if (key == arr[mid]):
            return mid
        if (key > arr[mid]):
            start = mid + 1
        else:
            end = mid - 1

        mid = start + (end - start)/2
    return -1


even = [2,4,6,8,23,45]
odd = [1,5,8,9,23]

evenindex = Binarysearch(even , 6, 8)
print("index of even search: \n", evenindex)

oddindex = Binarysearch(odd , 5, 9)
print("index of even search: ", oddindex)