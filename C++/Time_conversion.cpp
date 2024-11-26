//cpp code to convert 12-hour AM/PM format to military time 

#include <bits/stdc++.h>
#include<string.h>
using namespace std;



string timeConversion(string s) {
    
if(s[8]=='P' &&( s[0]!='1'||s[1]!='2')){
    string hour = s.substr(0,2);
    int var = stoi(hour);
    var+=12;
    hour = to_string(var);
    s.replace(0,2,hour);
    s.erase(8);
}
else if((s[8]=='A'&& s[0]=='1' )&& s[1]=='2'  ){
    s[0]='0' ;
    s[1]='0';
    s.erase(8);
    
}
else if(s[0]=='1'&&s[1]=='2'&&s[8]=='P'){
    s.erase(8);
    
}
else {
    s.erase(8);
    return s;
    
}
return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

   

    return 0;
}
