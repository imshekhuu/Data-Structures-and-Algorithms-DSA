def FirstOcurrance(arr, size, key):
    s = 0
    e = size - 1
    ans = -1
    mid = s + (e - s)//2
    while s <= e:
        if arr[mid] == key:
            ans = mid 
            e = mid - 1

        elif key > arr[mid]:
            s = mid + 1
        else :
            e = mid - 1
        mid = s + (e - s)//2
    return ans



def LastOcurrance(arr, size, key):
    s = 0
    e = size - 1
    ans = -1
    mid = s + (e - s)//2
    while s <= e:
        if key == arr[mid]:
            ans = mid
            s = mid + 1
        elif key > arr[mid]:
            s = mid + 1
        else:
            e = mid - 1
        mid = s + (e-s)//2
    return ans


arr = [1,2,3,3,5]
firstocc = FirstOcurrance(arr, 5, 3)
lastocc = LastOcurrance(arr, 5, 3)
print("the index value of 3 in first occ: ", firstocc)
print("the index value of 3 in last occ: ", lastocc)