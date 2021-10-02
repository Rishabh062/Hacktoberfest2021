#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char S[1000];
    int h[10]={0,0,0,0,0,0,0,0,0,0} ;   //hasing technique
    
    scanf("%s",S);
    
    for(int i = 0 ; i <= strlen(S);i++){
        if(S[i]>='0' && S[i]<='9')
            h[S[i]-'0']++ ;
    }
        
    for(int i = 0 ; i <= 9 ;i++)
        printf("%d ",h[i]) ;
    
    return 0;
}
