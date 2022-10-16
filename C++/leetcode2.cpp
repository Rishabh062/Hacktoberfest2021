class Solution {
public:
    int countTime(string timer) {
        int ans=1;
        if(timer[0]=='?'&&timer[1]=='?') ans*=24;
        else if(timer[1]=='?' && timer[0]=='2') ans*=4; 
        else if(timer[1]=='?' && timer[0]!='2') ans*=10;
        else if(timer[0]=='?')
        {
            if(timer[1]=='0'||timer[1]=='1'||timer[1]=='2'||timer[1]=='3')
                ans*=3;
            else ans*=2;
        }
        if(timer[3]=='?'&& timer[4]=='?') ans*=60;
        else if(timer[4]=='?') ans*=10;
        else if(timer[3]=='?') ans*=6;
        return ans;
    }
};
