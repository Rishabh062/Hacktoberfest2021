#include <stdio.h>

void lin_search(int arr[], int n, int val) {
    int pos;
    int flag = 0;

    for(int i = 0; i <  n; i++) {
        if (arr[i] == val) {
            flag = 1;
            pos = i + 1;
            printf("Value found at position %d\n", pos);
            break;
        }
    }
    if (flag == 0) {
        printf("Value not found\n");
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], arr1[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the value for element %d: ", i+1);
        scanf("%d", &arr[i]);
        arr1[i] = arr[i];
    }
    
    int val;
    printf("Enter the value to be searched: ");
    scanf("%d", &val);
    lin_search(arr, n, val);
    return 0;
}