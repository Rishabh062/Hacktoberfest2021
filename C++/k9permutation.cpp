/*
given a string of numbers which is between 1 to 9 which represent they key in keypad phone find the all possible permutation
for the given number. 

Input: 
        45
Output:
        gj
        gk
        gl
        hj
        hk
        hl
        ij
        ik
        il
*/


#include<iostream>
#include<string>
#include<queue>
using namespace std;
void t9Permutation(string str)
{
    string t9[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int i,j,n = str.length();
    queue<string> str_queue;
    str_queue.push("");
    for(i=0;i<n;i++) //for each input number
    {
        int queue_size = str_queue.size();
        string cur_str = t9[str[i]-48]; //retreive characters corresponding to the number
        while(queue_size) //While the previous elements of queue are not deleted
        {
            for(j=0;j<cur_str.length();j++) //for each char of cur_str, append front of queue with it as prefix
            {
                str_queue.push(str_queue.front()+cur_str[j]);
            }
            str_queue.pop();
            queue_size--;
        }
    }
    while(!str_queue.empty())
    {
        cout<<str_queue.front()<<endl;
        str_queue.pop();
    }
}
int main()
{
    string str;
    cin>>str;
    t9Permutation(str);
    return 0;
}