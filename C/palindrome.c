#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0,len,flag;
    char arr[100];
    printf("\nEnter a string :");
    scanf("%s",&arr);
    len = strlen(arr);
    for (i=0;i<len;i++){
        if (arr[i] != arr[len-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag = 1){
        printf("%s is a palindrome",arr);
    }
    else if (flag = 0){
        printf("Not a palindrome");
    }

}
​​​​