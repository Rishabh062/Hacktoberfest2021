#include <stdio.h>
#include <stdio.h>
#include <math.h>

// k-way SET ASSOSIATIVE MAPPING using FIFO replacement policy for k=2
//cache has 8 lines and block size is 2 words
long long int cache[8];

 void initialcache(){
     for(int i=0;i<8;i++){
        cache[i]=-1;
     }
 }
 int emptyindex[4]={0,0,0,0};
 void  printtag(){
     for(int j=0;j<8;j++){
        printf("line %d : %lld \n",j,cache[j]);
     }
 }

 int lineperset=2;

 int findadd(long long int c,int u){

     int k=u*lineperset;
     int k2=u*lineperset+lineperset-1;
     for(int l=k;l<=k2;l++){
        if(cache[l]==c)
            return 1;
     }
     return 0;

 }
 void insert(long long int p,int z){
     int index=z*lineperset+emptyindex[z];

     cache[index]=p;
     index++;
     index=index%2;
     emptyindex[z]=index;

 }

int main()
{
    initialcache();
    long int hit=0;
    long int miss=0;
    long long int address=0;
    int access=0;
    int set=4; // set=8/2=4;
    while(1){
        printf("press 1 to enter address 2 to show tag directory and 3 to end process 4 to get hits and miss\n");
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
                 long int bin=address;
                long int dec=0;
                int j=0;
                while(bin>0){
                    int u;
                    u=bin%10;
                    dec=dec+u*pow(2,j);
                    bin=bin/10;
                    j++;
                }
               int setno=dec%set;
                int l=findadd(address,setno);
                if(l==1){
                    hit++;
                    printf("it is hit\n");
                }
                if(l==0){
                    miss++;
                    printf("it is miss\n");
                     insert(address,setno);
                }
            }
    }
}

