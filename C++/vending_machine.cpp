#include<iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
using namespace std;
struct softdrink{
char  name[20];
float price;
unsigned quantity;
};


int main()
{
softdrink drink[5];
//Here we are just taking some drinks name in array and we are also taking price and quantity
strcpy(drink[0].name,"Cola"); drink[0].price=0.75; drink[0].quantity=20;
strcpy(drink[1].name,"Root Beer"); drink[1].price=0.75; drink[1].quantity=20;
strcpy(drink[2].name,"Lemon Lime"); drink[2].price=0.75; drink[2].quantity=20;
strcpy(drink[3].name,"Grape Soda"); drink[3].price=0.80; drink[3].quantity=20;
strcpy(drink[4].name,"Cream Soda"); drink[4].price=0.80; drink[4].quantity=20;

std::cout << std::fixed;
std::cout << std::setprecision(4);
  
int choice = 1;
//we will display choices and left over drinks 
while(choice != 6){
cout<<"\n 1) "<<drink[0].name<<"\t\t"<<drink[0].price<<"\t("<<drink[0].quantity<<") remaining";
cout<<"\n 2) "<<drink[1].name<<"\t\t"<<drink[1].price<<"\t("<<drink[1].quantity<<") remaining";
cout<<"\n 3) "<<drink[2].name<<"\t\t"<<drink[2].price<<"\t("<<drink[2].quantity<<") remaining";
cout<<"\n 4) "<<drink[3].name<<"\t\t"<<drink[3].price<<"\t("<<drink[3].quantity<<") remaining";
cout<<"\n 5) "<<drink[4].name<<"\t\t"<<drink[4].price<<"\t("<<drink[4].quantity<<") remaining";
cout<<"\n 6) Leave the drink machine \n\n";
cout<<"\n Choose one:";
cin>>choice;

if(choice >=1 && choice <=5)
{
    if(drink[choice-1].quantity == 0)
    {
        cout<<"\n No more " << drink[choice-1].name <<" Available ..";
        getchar(); getchar();continue;
    }
}

if(choice == 6)
cout<<"Thank for using it !!";
else if(choice <= 5)
{
float money;
cout<<"\n Enter any amount of money: ";
cin>>money;

float price;
if(choice>=1 && choice <=3)
{
price = .75;
if((money < price)){
cout<<"\n Enter sufficient amount ";
getchar(); getchar();
continue;
}
}
else if(choice ==4 || choice ==5)
{
price = .80;
if((money < price)){
cout<<"\n Enter sufficient amount ";
getchar();getchar();
continue;
}
}
cout<<"\n Thum, thum, thum, splat !";
cout<<"\n Enjoy your beverage ";
cout<<"\n\n Change calcualted : "<< money-price;
cout<<"\n You change, "<<money-price<<" just droped into the Change Dispenser.";
drink[choice-1].quantity = drink[choice-1].quantity - 1;

cout<<"\n There are "<< drink[choice-1].quantity <<" drinks of that type left";

getchar();
getchar();

}
else
{
cout<<"\n Warning : Invalid Choice ";
}

}

return 0;
}
