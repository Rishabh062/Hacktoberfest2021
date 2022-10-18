class Solution {
public:
    int countTime(string t) {
        int ans=1;
        if(t[0]=='?' && t[1]=='?'){
            ans=24;
        }
        else if(t[0]!='?' && t[1]=='?'){
            if((t[0]-'0')<2) ans=10;
            else ans=4;
        }
        else if(t[0]=='?' && t[1]!='?'){
            if((t[1]-'0')>3) ans=2;
            else ans=3;
        }
        cout<< ans;
        if(t[3]=='?' && t[4]=='?'){
            if(ans>0) ans*=60;
            else ans=60;
        }
        else if(t[3]!='?' && t[4]=='?'){
            if(ans>0) ans*=10;
            else ans=10;
        }
        else if(t[3]=='?' && t[4]!='?'){
            if(ans>0) {ans*=6;}
            else{ans=6;}
        }
        return ans;
    }
};
