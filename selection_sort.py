#Selection Sort
def selection_sort(arr):
    
    for i in range(len(arr)):
        min_index=i
        #Finding the minimum element
        for j in range(i+1, len(arr)):
            if arr[j]<arr[min_index]:
                min_index=j
        #Swapping
        arr[i], arr[min_index] = arr[min_index],arr[i]
        
    return arr

selection_sort([10,77,8,9,1,5])