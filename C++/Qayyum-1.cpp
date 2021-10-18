/*
	Name:Teacher's Qualities Calculator 2.
	
	Copyright:10002230010
	
	Author:Abdul Qayyum.
  
  Github: Qayyum-1
	
	Date: 26-11-20 15:44
  
  Hacktoberest 2021
	
	Description: :A calculator to check how good your teachers is by reciving data from five different users. And to distinguished the best amoung them. 
	
*/

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{

	float Da1,Da2,Da3,Da4,Da5,Db1,Db2,Db3,Db4,Db5,Dc1,Dc2,Dc3,Dc4,Dc5,Aa1,Aa2,Aa3,Aa4,Aa5,Ab1,Ab2,Ab3,Ab4,Ab5,Ac1,Ac2,Ac3,Ac4,Ac5,Ma1,Ma2,Ma3,Ma4,Ma5,Mb1,Mb2,Mb3,Mb4,Mb5,Mc1,Mc2,Mc3,Mc4,Mc5,Ka1,Ka2,Ka3,Ka4,Ka5,Kb1,Kb2,Kb3,Kb4,Kb5,Kc1,Kc2,Kc3,Kc4,Kc5,Sa1,Sa2,Sa3,Sa4,Sa5,Sb1,Sb2,Sb3,Sb4,Sb5,Sc1,Sc2,Sc3,Sc4,Sc5,Dnumber,Dpersonality,Dbehavior,Dconcept,Dper,Anumber,Apersonality,Abehavior,Aconcept,Aper,Mnumber,Mpersonality,Mbehavior,Mconcept,Mper,Knumber,Kpersonality,Kbehavior,Kconcept,Kper,Snumber,Spersonality,Sbehavior,Sconcept,Sper;
string Dname,Aname,Mname,Kname,Sname;
cout<<"Welcome users.\n\nHere we decide how good your teachers are by taking the opinion of five different people.\nAnd who is the best. "<<endl<<endl;
Sleep(2000);
cout<<"Please Enter the names of your five competible class teachers respectively."<<endl;
cout<<"1) ";
getline(cin, Dname);
cout<<"2) ";
getline(cin, Aname);
cout<<"3) ";
getline(cin, Mname);
cout<<"4) ";
getline(cin, Kname);
cout<<"5) ";
getline(cin, Sname);
cout<<endl<<"Thank you."<<endl;
cout<<"Now you will be asked about there certain qualities, please answer them honestly."<<endl<<endl;
Sleep(2000);


string name1;
cout<<"First opinion giver."<<endl;
cout<<"Please enter your name as you are an opinion giver. "<<endl;
getline(cin, name1);
cout<<endl; 
cout<<"Please enter required qualities from scale 1 to 10."<<endl<<endl;

cout<<"First of all about there Personality."<<endl<<endl;
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Personality:\t";
Done1:
while(!(cin>>Da1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(100, '\n');}
if(Da1>10||Da1<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Done1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Personality:\t";
Aone1:
while(!(cin>>Aa1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(100, '\n');}
if(Aa1>10||Aa1<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Aone1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Personality:\t";
Mone1:
while(!(cin>>Ma1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(100, '\n');}
if(Ma1>10||Ma1<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Mone1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Personality:\t";
Kone1:
while(!(cin>>Ka1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(100, '\n');}
if(Ka1>10||Ka1<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Kone1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Personality:\t";
Sone1:
while(!(cin>>Sa1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(100, '\n');}
if(Sa1>10||Sa1<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Sone1;}
cout<<endl;


cout<<"Now its time to talk about there behaviour."<<endl<<endl;
Sleep(500);
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Behavior:\t";
Done2:
while(!(cin>>Db1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Db1<0||Db1>10)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Done2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Behavior:\t";
Aone2:
while(!(cin>>Ab1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ab1<0||Ab1>10)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Aone2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Behavior:\t";
Mone2:
while(!(cin>>Mb1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mb1<0||Mb1>10)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Mone2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Behavior:\t";
Kone2:
while(!(cin>>Kb1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Kb1<0||Kb1>10)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Kone2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Behavior:\t";
Sone2:
while(!(cin>>Sb1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sb1<0||Sb1>10)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Sone2;}
cout<<endl;


cout<<"Now how about concept."<<endl<<endl;
Sleep(500);
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Concept:\t";
Done3:
while(!(cin>>Dc1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Dc1<0||Dc1>10)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Done3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Concept:\t";
Aone3:
while(!(cin>>Ac1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ac1<0||Ac1>10)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Aone3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Concept:\t";
Mone3:
while(!(cin>>Mc1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mc1<0||Mc1>10)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Mone3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Concept:\t";
Kone3:
while(!(cin>>Kc1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Kc1<0||Kc1>10)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Kone3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Concept:\t";
Sone3:
while(!(cin>>Sc1))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sc1<0||Sc1>10)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again. "<<endl;
goto Sone3;}
cout<<endl;
cout<<"Thank you Mr/Ms/Mrs "<<name1<<" for your opinions."<<endl<<endl;
cout<<"Now\n\nSecond opinion giver.\nPlease wait."<<endl<<endl;
Sleep(3000);

//Second opinion giver

string name2;
cout<<"Please enter your name as you are an opinion giver."<<endl;
cin.ignore(100,'\n');
getline(cin, name2);
cout<<endl;
cout<<"Please enter required qualities from scale 1 to 10."<<endl<<endl;
cout<<"First of all about there Personality."<<endl<<endl;
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Personality:\t";
Dtwo1:
while(!(cin>>Da2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Da2>10||Da2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dtwo1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Personality:\t";
Atwo1:
while(!(cin>>Aa2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Aa2>10||Aa2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Atwo1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Personality:\t";
Mtwo1:
while(!(cin>>Ma2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ma2>10||Ma2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mtwo1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Personality:\t";
Ktwo1:
while(!(cin>>Ka2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ka2>10||Ka2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Ktwo1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Personality:\t";
Stwo1:
while(!(cin>>Sa2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sa2>10||Sa2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Stwo1;}
cout<<endl;


cout<<"Now its time to talk about there behaviour."<<endl<<endl;
Sleep(500);
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Behavior:\t";
Dtwo2:
while(!(cin>>Db2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Db2>10||Db2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dtwo2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Behavior:\t";
Atwo2:
while(!(cin>>Ab2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ab2>10||Ab2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Atwo2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Behavior:\t";
Mtwo2:
while(!(cin>>Mb2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mb2>10||Mb2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mtwo2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Behavior:\t";
Ktwo2:
while(!(cin>>Kb2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Kb2>10||Kb2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Ktwo2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Behavior:\t";
Stwo2:
while(!(cin>>Sb2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sb2>10||Sb2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Stwo2;}
cout<<endl;


cout<<"Now how about concept."<<endl<<endl;
Sleep(500);
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Concept:\t";
Dtwo3:
while(!(cin>>Dc2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Dc2>10||Dc2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dtwo3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Concept:\t";
Atwo3:
while(!(cin>>Ac2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ac2>10||Ac2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Atwo3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Concept:\t";
Mtwo3:
while(!(cin>>Mc2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mc2>10||Mc2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mtwo3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Concept:\t";
Ktwo3:
while(!(cin>>Kc2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Kc2>10||Kc2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Ktwo3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Concept:\t";
Stwo3:
while(!(cin>>Sc2))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sc2>10||Sc2<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Stwo3;}
cout<<endl;
cout<<"Thank you Mr/Ms/Mrs "<<name2<<" for your opinions."<<endl<<endl;
cout<<"Now\nThird opinion giver.\nPlease wait"<<endl<<endl;
Sleep(3000);

//Third opinion giver.


string name3;
cout<<"Please enter your name as you are an opinion giver."<<endl;
cin.ignore(123,'\n');
getline(cin, name3);
cout<<endl;
cout<<"Please enter required qualities from scale 1 to 10."<<endl<<endl;
cout<<"First of all about there Personality."<<endl<<endl;
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Personality:\t";
Dthree1:
while(!(cin>>Da3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Da3>10||Da3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dthree1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Personality:\t";
Athree1:
while(!(cin>>Aa3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Aa3>10||Aa3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Athree1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Personality:\t";
Mthree1:
while(!(cin>>Ma3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ma3>10||Ma3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mthree1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Personality:\t";
Kthree1:
while(!(cin>>Ka3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ka3>10||Ka3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Kthree1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Personality:\t";
Sthree1:
while(!(cin>>Sa3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sa3>10||Sa3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Sthree1;}
cout<<endl;


cout<<"Now its time to talk about there behaviour."<<endl<<endl;
Sleep(500);
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Behavior:\t";
Dthree2:
while(!(cin>>Db3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Db3>10||Db3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dthree2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Behavior:\t";
Athree2:
while(!(cin>>Ab3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ab3>10||Ab3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Athree2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Behavior:\t";
Mthree2:
while(!(cin>>Mb3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mb3>10||Mb3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mthree2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Behavior:\t";
Kthree2:
while(!(cin>>Kb3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Kb3>10||Kb3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Kthree2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Behavior:\t";
Sthree2:
while(!(cin>>Sb3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sb3>10||Sb3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Sthree2;}
cout<<endl;


cout<<"Now how about concept."<<endl<<endl;
Sleep(500);
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Concept:\t";
Dthree3:
while(!(cin>>Dc3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Dc3>10||Dc3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dthree3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Concept:\t";
Athree3:
while(!(cin>>Ac3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ac3>10||Ac3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Athree3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Concept:\t";
Mthree3:
while(!(cin>>Mc3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mc3>10||Mc3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mthree3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Concept:\t";
Kthree3:
while(!(cin>>Kc3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Kc3>10||Kc3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Kthree3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Concept:\t";
Sthree3:
while(!(cin>>Sc3))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sc3>10||Sc3<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Sthree3;}
cout<<endl;
cout<<"Thank you Mr/Ms/Mrs "<<name3<<" for your opinions."<<endl<<endl;
cout<<"Now\nFourth opinion giver.\nPlease wait"<<endl<<endl;
Sleep(3000);

//Fourth opinion giver.

string name4;
cout<<"Fourth opinion giver."<<endl;
cout<<"Please enter your name as you are an opinion giver."<<endl;
cin.ignore(123,'\n');
getline(cin, name4);
cout<<endl;
cout<<"Please enter required qualities from scale 1 to 10."<<endl<<endl;
cout<<"First of all about there Personality."<<endl<<endl;
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Personality:\t";
Dfour1:
while(!(cin>>Da4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Da4>10||Da4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dfour1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Personality:\t";
Afour1:
while(!(cin>>Aa4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Aa4>10||Aa4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Afour1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Personality:\t";
Mfour1:
while(!(cin>>Ma4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ma4>10||Ma4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mfour1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Personality:\t";
Kfour1:
while(!(cin>>Ka4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ka4>10||Ka4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Kfour1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Personality:\t";
Sfour1:
while(!(cin>>Sa4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sa4>10||Sa4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Sfour1;}
cout<<endl;


cout<<"Now its time to talk about there behaviour."<<endl<<endl;
Sleep(500);
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Behavior:\t";
Dfour2:
while(!(cin>>Db4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Db4>10||Db4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dfour2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Behavior:\t";
Afour2:
while(!(cin>>Ab4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ab4>10||Ab4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Afour2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Behavior:\t";
Mfour2:
while(!(cin>>Mb4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mb4>10||Mb4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mfour2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Behavior:\t";
Kfour2:
while(!(cin>>Kb4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Kb4>10||Kb4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Kfour2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Behavior:\t";
Sfour2:
while(!(cin>>Sb4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sb4>10||Sb4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Sfour2;}
cout<<endl;


cout<<"Now how about concept."<<endl<<endl;
Sleep(500);
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Concept:\t";
Dfour3:
while(!(cin>>Dc4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Dc4>10||Dc4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dfour3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Concept:\t";
Afour3:
while(!(cin>>Ac4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ac4>10||Ac4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Afour3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Concept:\t";
Mfour3:
while(!(cin>>Mc4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mc4>10||Mc4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mfour3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Concept:\t";
Kfour3:
while(!(cin>>Kc4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Kc4>10||Kc4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Kfour3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Concept:\t";
Sfour3:
while(!(cin>>Sc4))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sc4>10||Sc4<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Sfour3;}
cout<<endl;
cout<<"Thank you Mr/Ms/Mrs "<<name4<<" for your opinions."<<endl<<endl;
cout<<"Now\nFifth opinion giver.\nPlease wait"<<endl<<endl;
Sleep(3000);

//Fifth opinion giver.

string name5;
cout<<"Fifth opinion giver."<<endl;
cout<<"Please enter your name as you are an opinion giver."<<endl;
cin.ignore(123,'\n');
getline(cin, name5);
cout<<endl;
cout<<"Please enter required qualities from scale 1 to 10."<<endl<<endl;
cout<<"First of all about there Personality."<<endl<<endl;
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Personality:\t";
Dfive1:
while(!(cin>>Da5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Da5>10||Da5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dfive1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Personality:\t";
Afive1:
while(!(cin>>Aa5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Aa5>10||Aa5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Afive1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Personality:\t";
Mfive1:
while(!(cin>>Ma5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ma5>10||Ma5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mfive1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Personality:\t";
Kfive1:
while(!(cin>>Ka5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ka5>10||Ka5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Kfive1;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Personality:\t";
Sfive1:
while(!(cin>>Sa5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sa5>10||Sa5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Sfive1;}
cout<<endl;


cout<<"Now its time to talk about there behaviour."<<endl<<endl;
Sleep(500);
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Behavior:\t";
Dfive2:
while(!(cin>>Db5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Db5>10||Db5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dfive2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Behavior:\t";
Afive2:
while(!(cin>>Ab5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ab5>10||Ab5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Afive2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Behavior:\t";
Mfive2:
while(!(cin>>Mb5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mb5>10||Mb5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mfive2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Behavior:\t";
Kfive2:
while(!(cin>>Kb5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Kb5>10||Kb5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Kfive2;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Behavior:\t";
Sfive2:
while(!(cin>>Sb5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sb5>10||Sb5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Sfive2;}
cout<<endl;


cout<<"Now how about concept."<<endl<<endl;
Sleep(500);
cout<<"Please enter about Mr/Ms/Mrs "<<Dname<<"'s Concept:\t";
Dfive3:
while(!(cin>>Dc5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Dc5>10||Dc5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Dfive3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Aname<<"'s Concept:\t";
Afive3:
while(!(cin>>Ac5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Ac5>10||Ac5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Afive3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Mname<<"'s Concept:\t";
Mfive3:
while(!(cin>>Mc5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mc5>10||Mc5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Mfive3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Kname<<"'s Concept:\t";
Kfive3:
while(!(cin>>Kc5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Kc5>10||Kc5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Kfive3;}

cout<<"Please enter about Mr/Ms/Mrs "<<Sname<<"'s Concept:\t";
Sfive3:
while(!(cin>>Sc5))
{cout<<"Please stay to the point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Sc5>10||Sc5<0)
{cout<<"Error! Please enter in scale 0 to 10.\nTry again."<<endl;
goto Sfive3;}
cout<<endl;
cout<<"Thank you Mr/Ms/Mrs "<<name5<<" for your opinions."<<endl<<endl<<endl;
cout<<"Please wait;"<<endl;
Sleep(2000);
//END

//Thanks Giving.
cout<<"Special thanks to opinion givers which are;"<<endl;
Sleep(500);
cout<<"1) "<<name1<<endl;
Sleep(500);
cout<<"2) "<<name2<<endl;
Sleep(500);
cout<<"3) "<<name3<<endl;
Sleep(500);
cout<<"4) "<<name4<<endl;
Sleep(500);
cout<<"5) "<<name5<<endl<<endl;
Sleep(500);
cout<<"Thanks for your contribution."<<endl<<endl;


//First teacher's calculation and result.

//Calculation.

cout<<"Now its time for results."<<endl;
cout<<"Enter '1' to see Mr./Ms./Mrs. "<<Dname<<"'s status."<<endl;
Dnum:
while(!(cin>>Dnumber))
{cout<<"Please stay to tha point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Dnumber!=1)
{cout<<"Error! Please enter 1 to proceed."<<endl;
goto Dnum;}
Dpersonality=(Da1+Da2+Da3+Da4+Da5)/5;
Dbehavior=(Db1+Db2+Db3+Db4+Db5)/5;
Dconcept=(Dc1+Dc2+Dc3+Dc4+Dc5)/5;
Dper=(Dpersonality+Dbehavior+Dconcept)*100/30;

//Results.

cout<<"The average result of Mr/Ms/Mrs "<<Dname<<" are given below;"<<endl;
Sleep(500);
cout<<"Personality= "<<Dpersonality<<" /10"<<endl;
Sleep(500);
cout<<"Behavior   = "<<Dbehavior<<" /10"<<endl;
Sleep(500);
cout<<"Concepts   = "<<Dconcept<<" /10"<<endl;
Sleep(500);
cout<<"Total qualities in percentage are given below;"<<endl<<endl;
Sleep(500);
cout<<"Percentage="<<Dper<<"%"<<" by the given data."<<endl<<endl;
Sleep(1000);

//Standard.

if(Dper>=80&&Dper<=100)
{cout<<"Mr/Ms/Mrs "<<Dname<<" is held at Excellent standards by opinion givers."<<endl<<endl;}
else if (Dper>=70&&Dper<80)
{cout<<"Mr/Ms/Mrs "<<Dname<<" is held at Satisfactory standards by opinion givers."<<endl<<endl;}
else if(Dper>=65&&Dper<70)
{cout<<"Mr/Ms/Mrs "<<Dname<<" is held at Normal standards by opinion givers."<<endl<<endl;}
else if (Dper>=0&&Dper<65)
{cout<<"Mr/Ms/Mrs "<<Dname<<" is Not Good enough for teaching, decided by the opinion givers."<<endl<<endl;}
else
cout<<"Invalid input\nPlease run program again."<<endl<<endl;


//Second teacher's calculation and result.

//Calculatin

cout<<"Now,\nEnter '2' to see Mr./Ms./Mrs. "<<Aname<<"'s status."<<endl;
Anum:
while(!(cin>>Anumber))
{cout<<"Please stay to tha point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Anumber!=2)
{cout<<"Error!\nPlease enter 2 to proceed."<<endl;
goto Anum;}
cout<<"Results are:"<<endl;
Apersonality=(Aa1+Aa2+Aa3+Aa4+Aa5)/5;
Abehavior=(Ab1+Ab2+Ab3+Ab4+Ab5)/5;
Aconcept=(Ac1+Ac2+Ac3+Ac4+Ac5)/5;
Aper=(Apersonality+Abehavior+Aconcept)*100/30;

//Result

cout<<"The average result of Mr/Ms/Mrs "<<Aname<<" are given below;"<<endl;
Sleep(500);
cout<<"Personality= "<<Apersonality<<" /10"<<endl;
Sleep(500);
cout<<"Behavior   = "<<Abehavior<<" /10"<<endl;
Sleep(500);
cout<<"Concepts   = "<<Aconcept<<" /10"<<endl;
Sleep(500);
cout<<"Total qualities in percentage are given below;"<<endl<<endl;
Sleep(500);
cout<<"Percentage="<<Aper<<"%"<<" by the given data."<<endl<<endl;
Sleep(1000);

//Standard

if(Aper>=80&&Aper<=100)
{cout<<"Mr/Ms/Mrs "<<Aname<<" is held at Excellent standards by opinion givers."<<endl<<endl;}
else if (Aper>=70&&Aper<80)
{cout<<"Mr/Ms/Mrs "<<Aname<<" is held at Satisfactory standards by opinion givers."<<endl<<endl;}
else if(Aper>=65&&Aper<70)
{cout<<"Mr/Ms/Mrs "<<Aname<<" is held at Normal standards by opinion givers."<<endl<<endl;}
else if (Aper>=0&&Aper<65)
{cout<<"Mr/Ms/Mrs "<<Aname<<" is Not Good enough for teaching, decided by the opinion givers."<<endl<<endl;}
else
cout<<"Invalid input\nPlease run program again."<<endl<<endl;


//Thrid teacher's calculation and result.

//Calculation

cout<<"Now,\nEnter '3' to see Mr./Ms./Mrs. "<<Mname<<"'s status."<<endl;
Mnum:
while(!(cin>>Mnumber))
{cout<<"Please stay to tha point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Mnumber!=3)
{cout<<"Error!\n Please enter 3 to proceed."<<endl;
goto Mnum;}
cout<<"Results are:"<<endl;
Mpersonality=(Ma1+Ma2+Ma3+Ma4+Ma5)/5;
Mbehavior=(Mb1+Mb2+Mb3+Mb4+Mb5)/5;
Mconcept=(Mc1+Mc2+Mc3+Mc4+Mc5)/5;
Mper=(Mpersonality+Mbehavior+Mconcept)*100/30;

//Result

cout<<"The average result of Mr/Ms/Mrs "<<Mname<<" are given below;"<<endl;
Sleep(500);
cout<<"Personality= "<<Mpersonality<<" /10"<<endl;
Sleep(500);
cout<<"Behavior   = "<<Mbehavior<<" /10"<<endl;
Sleep(500);
cout<<"Concepts   = "<<Mconcept<<" /10"<<endl;
Sleep(500);
cout<<"Total qualities in percentage are given below;"<<endl<<endl;
Sleep(500);
cout<<"Percentage="<<Mper<<"%"<<" by the given data."<<endl<<endl;
Sleep(1000);

//Standard

if(Mper>=80&&Mper<=100)
{cout<<"Mr/Ms/Mrs "<<Mname<<" is held at Excellent standards by opinion givers."<<endl<<endl;}
else if (Mper>=70&&Mper<80)
{cout<<"Mr/Ms/Mrs "<<Mname<<" is held at Satisfactory standards by opinion givers."<<endl<<endl;}
else if(Mper>=65&&Mper<70)
{cout<<"Mr/Ms/Mrs "<<Mname<<" is held at Normal standards by opinion givers."<<endl<<endl;}
else if (Mper>=0&&Mper<65)
{cout<<"Mr/Ms/Mrs "<<Mname<<" is Not Good enough for teaching, decided by the opinion givers."<<endl<<endl;}
else
cout<<"Invalid input\nPlease run program again."<<endl<<endl;


//Fourth teacher's calculation and result.

//Calculation

cout<<"Now,\nEnter '4' to see Mr./Ms./Mrs. "<<Kname<<"'s status."<<endl;
Knum:
while(!(cin>>Knumber))
{cout<<"Please stay to tha point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Knumber!=4)
{cout<<"Error!\nPkease enter 4 to proceed."<<endl;
goto Knum;}
cout<<"Results are:"<<endl;
Kpersonality=(Ka1+Ka2+Ka3+Ka4+Ka5)/5;
Kbehavior=(Kb1+Kb2+Kb3+Kb4+Kb5)/5;
Kconcept=(Kc1+Kc2+Kc3+Kc4+Kc5)/5;
Kper=(Kpersonality+Kbehavior+Kconcept)*100/30;

//Result

cout<<"The average result of Mr/Ms/Mrs "<<Kname<<" are given below;"<<endl;
Sleep(500);
cout<<"Personality= "<<Kpersonality<<" /10"<<endl;
Sleep(500);
cout<<"Behavior   = "<<Kbehavior<<" /10"<<endl;
Sleep(500);
cout<<"Concepts   = "<<Kconcept<<" /10"<<endl;
Sleep(500);
cout<<"Total qualities in percentage are given below;"<<endl<<endl;
Sleep(500);
cout<<"Percentage="<<Kper<<"%"<<" by the given data."<<endl<<endl;
Sleep(1000);

//Standard

if(Kper>=80&&Kper<=100)
{cout<<"Mr/Ms/Mrs "<<Kname<<" is held at Excellent standards by opinion givers."<<endl<<endl;}
else if (Kper>=70&&Kper<80)
{cout<<"Mr/Ms/Mrs "<<Kname<<" is held at Satisfactory standards by opinion givers."<<endl<<endl;}
else if(Kper>=65&&Kper<70)
{cout<<"Mr/Ms/Mrs "<<Kname<<" is held at Normal standards by opinion givers."<<endl<<endl;}
else if (Kper>=0&&Kper<65)
{cout<<"Mr/Ms/Mrs "<<Kname<<" is Not Good enough for teaching, decided by the opinion givers."<<endl<<endl;}
else
cout<<"Invalid input\nPlease run program again."<<endl<<endl;


//Fifth teacher's calculation and result

//Calculation

cout<<"Now,\nEnter '5' to see Mr./Ms./Mrs. "<<Sname<<"'s status."<<endl;
Snum:
while(!(cin>>Snumber))
{cout<<"Please stay to tha point.\nPlease try again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(Snumber!=5)
{cout<<"Error!\nPlease enter 5 to proceed."<<endl;
goto Snum;}
cout<<"Results are:"<<endl;
Spersonality=(Sa1+Sa2+Sa3+Sa4+Sa5)/5;
Sbehavior=(Sb1+Sb2+Sb3+Sb4+Sb5)/5;
Sconcept=(Sc1+Sc2+Sc3+Sc4+Sc5)/5;
Sper=(Spersonality+Sbehavior+Sconcept)*100/30;

//Result

cout<<"The average result of Mr/Ms/Mrs "<<Sname<<" are given below;"<<endl;
Sleep(500);
cout<<"Personality= "<<Spersonality<<" /10"<<endl;
Sleep(500);
cout<<"Behavior   = "<<Sbehavior<<" /10"<<endl;
Sleep(500);
cout<<"Concepts   = "<<Sconcept<<" /10"<<endl;
Sleep(500);
cout<<"Total qualities in percentage are given below;"<<endl<<endl;
Sleep(500);
cout<<"Percentage="<<Sper<<"%"<<" by the given data."<<endl<<endl;
Sleep(1000);

//Standard

if(Sper>=80&&Sper<=100)
{cout<<"Mr/Ms/Mrs "<<Sname<<" is held at Excellent standards by opinion givers."<<endl<<endl;}
else if (Sper>=70&&Sper<80)
{cout<<"Mr/Ms/Mrs "<<Sname<<" is held at Satisfactory standards by opinion givers."<<endl<<endl;}
else if(Sper>=65&&Sper<70)
{cout<<"Mr/Ms/Mrs "<<Sname<<" is held at Normal standards by opinion givers."<<endl<<endl;}
else if (Sper>=0&&Sper<65)
{cout<<"Mr/Ms/Mrs "<<Sname<<" is Not Good enough for teaching, decided by the opinion givers."<<endl<<endl;}
else
{cout<<"Invalid input\nPlease run program again."<<endl<<endl;}

//Ranks
int ranknum;
cout<<"If you want see the best amoung them, then please enter '0'."<<endl<<endl;
rank:
while(!(cin>>ranknum))
{cout<<"Error!  Please enter '0' to proceed.\nTry again."<<endl;
cin.clear();
cin.ignore(123, '\n');}
if(ranknum!=0)
{cout<<"Error!  Please enter '0' to proceed.\nTry again."<<endl;
goto rank;}
Sleep(1000);
if(Dper>=Aper&&Dper>=Mper&&Dper>=Kper&&Dper>=Sper)
{cout<<"Mr/Ms/Mrs "<<Dname<<" is Ranked First amoung the Given Teachers."<<endl<<endl;}
if(Aper>=Dper&&Aper>=Mper&&Aper>=Kper&&Aper>=Sper)
{cout<<"Mr/Ms/Mrs "<<Aname<<" is Ranked First amoung the Given Teachers."<<endl<<endl;}
if(Mper>=Dper&&Mper>=Aper&&Mper>=Kper&&Mper>=Sper)
{cout<<"Mr/Ms/Mrs "<<Mname<<" is Ranked First amoung the Given Teachers."<<endl<<endl;}
if(Kper>=Dper&&Kper>=Aper&&Kper>=Mper&&Kper>=Sper)
{cout<<"Mr/Ms/Mrs "<<Kname<<" is Ranked First amoung the Given Teachers."<<endl<<endl;}
if(Sper>=Dper&&Sper>=Aper&&Sper>=Mper&&Sper>=Kper)
{cout<<"Mr/Ms/Mrs "<<Sname<<" is Ranked First amoung the Given Teachers,"<<endl<<endl;}


Sleep(500);
cout<<"Thankyou users for your time."<<endl<<endl;
Sleep(500);
cout<<"We will be back with more convinent application.";
Sleep(1000000000);

return 0;
}
