#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
 int numframes,N;
 cout<<"Enter the number of frames : ";
 cin>>numframes;
 cout<<"Enter the Window Size : ";
 cin>>N;
 int i=1;
 while(i<=numframes)
 {
     int ack=0;
     for(int j=i;j<i+N && j<=numframes;j++)
     {
         cout<<"Sent Frame "<<j<<endl;

     }

     for(int j=i;j<i+N && j<=numframes;j++)
     {
         int flag = rand()%10;
         if(!flag)
             {   cout<<"Acknowledgment Frame "<<j<<" Not Received"<<endl;
                 cout<<"Retransmitting Window"<<endl;
                  break;


             }
         else
             {
                 cout<<"Acknowledgment for Frame "<<j<<endl;
                 ack++;

             }
     }
     cout<<endl;
     if(ack==N)
    {
     i+=N;

     }

 }
 return 0;
}
