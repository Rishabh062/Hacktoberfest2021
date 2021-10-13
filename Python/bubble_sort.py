def bubble_sort(list1):  
    # Outer loop for traverse the entire list
    for i in range(0,len(list1)-1):
        #Optimized bubble sort
        flag=1
        for j in range(len(list1)-1):  
            if(list1[j]>list1[j+1]):  
                temp = list1[j]  
                list1[j] = list1[j+1]  
                list1[j+1] = temp
                flag=0
        #if there is no swapping then the list is already sorted.
        if flag:
            return list1
    return list1  
  
list1 = [5, 3, 8, 6, 7, 2]  
print("The unsorted list is: ", list1)  
# Calling the bubble sort function  
print("The sorted list is: ", bubble_sort(list1))  
