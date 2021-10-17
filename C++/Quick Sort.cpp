#include<iostream>
#include<cstdlib>

using namespace std;

void swap(int *a, int *b) {
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

int Partition(int a[], int l, int h) {
   int pivot, index, i;
   index = l;
   pivot = h;
   for(i = l; i < h; i++) {
      if(a[i] < a[pivot]) {
         swap(&a[i], &a[index]);
         index++;
      }
   }
   swap(&a[pivot], &a[index]);
   return index;
}
int RandomPivotPartition(int a[], int l, int h) {
   int pvt, n, temp;
   n = rand();
   pvt = l + n%(h-l+1);
   swap(&a[h], &a[pvt]);
   return Partition(a, l, h);
}
int QuickSort(int a[], int l, int h) {
   int pindex;
   if(l < h) {
      pindex = RandomPivotPartition(a, l, h);
      QuickSort(a, l, pindex-1);
      QuickSort(a, pindex+1, h);
   }
   return 0;
}
int main() {
   int n, i;
   cout<<"\nEnter the number of  element to be sorted Using quick Sort: ";
   cin>>n;
   int arr[n];
     cout<<"\nEnter the " <<n<< " elements to be sorted: ";
   for(i = 0; i < n; i++) {
  
      cin>>arr[i];
   }
   QuickSort(arr, 0, n-1);
    cout << "Array after Quick Sorting: ";
   for (i = 0; i < n; i++)
      cout<<" "<<arr[i];
   return 0;
}

//avg time->nlog(n)
//best time->nlog(n)
