def merge(Arr,L,R):
    i=j=k=0
    while(i<len(L) and j<len(R)):
        
        if(L[i]<R[j]):
            
            Arr[k]=L[i]
            i+=1
            k+=1 
        else:
            
            Arr[k]=R[j] 
            j+=1 
            k+=1
    while(i<len(L)):
         Arr[k]=L[i]
         i+=1
         k+=1 
    while(j<len(R)):
         Arr[k]=R[j] 
         j+=1
         k+=1

def partition(Arr):
    if(len(Arr)>1):
        mid=len(Arr)//2 
        L=Arr[:mid]
        R=Arr[mid:]
        partition(L)
        partition(R)
        merge(Arr,L,R) 
Arr=list(map(int,input().split()))
partition(Arr)
print(Arr) 

'''
Arr=[2,6,5,3,45]
'''
