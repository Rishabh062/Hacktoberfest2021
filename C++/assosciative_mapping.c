#include <stdio.h>
#include <stdio.h>
#include <math.h>
//ASSOSCIATIVE MAPPING using FIFO replacement policy
//cache has 8 lines and block size is 2 words
long long int cache[8];
 void initialcache(){
     for(int i=0;i<8;i++){
        cache[i]=-1;
     }
 }
 int empty=0;
 void  printtag(){
     for(int j=0;j<8;j++){
        printf("line %d : %lld \n",j,cache[j]);
     }
 }
 int findadd(long long int c){
     for(int l=0;l<8;l++){
        if(cache[l]==c)
            return 1;
     }
     return 0;

 }
 void insert(long long int p){
     cache[empty]=p;
     empty++;
     empty=empty%8;
 }

int main()
{
    initialcache();
    long int hit=0;
    long int miss=0;
    long long int address=0;
    int access=0;
    while(1){
        printf("press 1 to enter address 2 to show tag directory and 3 to end process 4 to get hit and miss\n");
        int a;
        scanf("%d",&a);
        if(a==4){
            printf("hits : %ld miss : %ld total access %d\n",hit,miss,access);
        }
        if(a==3)
            break;
        if(a==2)
            printtag();

            if(a==1){
                    access++;
                printf("enter the address\n");
                scanf("%lld",&address);
                address=address/10;
                int l=findadd(address);
                if(l==1){
                    hit++;
                    printf("it is hit\n");
                }
                if(l==0){
                    miss++;
                    printf("it is miss\n");
                     insert(address);
                }
            }
    }
}
