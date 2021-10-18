/*Programm is Fully AutoMated,YOu Can Check it by giving it different inputs
that are not according to required input values, Hope it will not make Hopeless you!

        Total Coding by : M.Raheel(Student of Software Engineering,The IUB)
        Respected Teacher make me able
        to write This Programm: Pro Dr-Daler Ali(lecturer in IUB,Software Engineering)
        
        Name: Amber Shahzad.
        
        Github: ambershahzad
        
        Hactoberfest 2021
        */

#include <iostream>
using namespace std;
int main()
{
    // Variables Declearation
    float sirDalerpre, sirDalerbeha, sirDalercopre;
    float mamSunniapre, mamSunniabeha, mamSunniacopre;
    float mamMalikapre, mamMalikabeha, mamMalikacopre;
    float mamKausarpre, mamKausarbeha, mamKausarcopre;
    float mamAemanpre, mamAemanbeha, mamAemancopre;
    string name;
    float sirDalerTotal, mamMalikaTotal, mamAemanTotal, mamSunniaTotal, mamKausarTotal;
    float sirDalerPer, mamKausarPer, mamAemanPer, mamSunniaPer, mamMalikaPer;
    // Showing Message of Programm and Entering name of Student
    cout << "Hi I'm Teachers Ranking Programm desined by Raheel!\nKeep in Mind marks should max 10,min 0 and should in integer!\nFirst of All I Wanna Your Name!\n";
    cout << "What is Your Name Dear = ";
    getline(cin, name);
    cout << name << " Welcome To Raheel's Teachers Ranking Programm!\nStart Your Work Now!\n";
/* Entering Sir Daler presention Skills and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label1:
    cout << "Sir Daler's presentation = ";
    while (!(cin >> sirDalerpre))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (sirDalerpre > 10 || sirDalerpre < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label1;
    }
    else
    {
        cout << "Sir Daler's Presentation Marked by " << name << " is = " << sirDalerpre << endl;
    }
    /* Entering Sir Daler Behaviour  and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label2:
    cout << "Sir Daler's Behaviour = ";
    while (!(cin >> sirDalerbeha))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (sirDalerbeha > 10 || sirDalerbeha < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label2;
    }
    else
    {
        cout << "Sir Daler's Behaviour Marked by " << name << " is = " << sirDalerbeha << endl;
    }
    /* Entering Sir Daler Cooperation and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label3:
    cout << "Sir Daler's Cooperation = ";
    while (!(cin >> sirDalercopre))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (sirDalercopre > 10 || sirDalercopre < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label3;
    }
    else
    {
        cout << "Sir Daler's Cooperation Marked by " << name << " is = " << sirDalercopre << endl;
    }

    /* Entering Mam Sunnia Presentation  and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
    cout << "Now Enter Data Regarding Mam Sunnia Ok!\n";

Label4:
    cout << "Mam Sunnia Presentation  = ";
    while (!(cin >> mamSunniapre))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamSunniapre > 10 || mamSunniapre < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label4;
    }
    else
    {
        cout << "Mam Sunnia Presentation Marked by " << name << " is = " << mamSunniapre << endl;
    }
    /* Entering Mam Sunnia Behaviour  and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label5:
    cout << "Mam Sunnia Behaviour  = ";
    while (!(cin >> mamSunniabeha))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamSunniabeha > 10 || mamSunniabeha < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label5;
    }
    else
    {
        cout << "Mam Sunnia Behaviour Marked by " << name << " is = " << mamSunniabeha << endl;
    }
    /* Entering Mam Sunnia Cooperation  and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label6:
    cout << "Mam Sunnia Cooperation  = ";
    while (!(cin >> mamSunniacopre))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamSunniacopre > 10 || mamSunniacopre < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label6;
    }
    else
    {
        cout << "Mam Sunnia Cooperation Marked by " << name << " is = " << mamSunniacopre << endl;
    }
    /* Entering Mam Malika Presentation and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
    cout << "Enter Data Regarding Mam Malika ok!\n";
Label7:
    cout << "Mam Malika Presentation  = ";
    while (!(cin >> mamMalikapre))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamMalikapre > 10 || mamMalikapre < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label7;
    }
    else
    {
        cout << "Mam Malika Presentation Marked by " << name << " is = " << mamMalikapre << endl;
    }
    /* Entering Mam Malika Behaviour and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label8:
    cout << "Mam Malika Behaviour  = ";
    while (!(cin >> mamMalikabeha))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamMalikabeha > 10 || mamMalikabeha < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label8;
    }
    else
    {
        cout << "Mam Malika Behaviour Marked by " << name << " is = " << mamMalikabeha << endl;
    }
    /* Entering Mam Malika Cooperation and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label9:
    cout << "Mam Malika Cooperation  = ";
    while (!(cin >> mamMalikacopre))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamMalikacopre > 10 || mamMalikacopre < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label9;
    }
    else
    {
        cout << "Mam Malika Cooperation Marked by " << name << " is = " << mamMalikacopre << endl;
    }
    /* Entering Mam Kausar Presentation and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
    cout << "Now Enter Data Regarding Mam Kausar ok!\n";
Label10:
    cout << "Mam Kausar Presentation  = ";
    while (!(cin >> mamKausarpre))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamKausarpre > 10 || mamKausarpre < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label10;
    }
    else
    {
        cout << "Mam Kausar Presentation Marked by " << name << " is = " << mamKausarpre << endl;
    }
    /* Entering Mam Kausar Behaviour and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label11:
    cout << "Mam Kausar Behaviour  = ";
    while (!(cin >> mamKausarbeha))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamKausarbeha > 10 || mamKausarbeha < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label11;
    }
    else
    {
        cout << "Mam Kausar Behaviour Marked by " << name << " is = " << mamKausarbeha << endl;
    }
    /* Entering Mam Kausar Cooperation and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label12:
    cout << "Mam Kausar Cooperation  = ";
    while (!(cin >> mamKausarcopre))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamKausarcopre > 10 || mamKausarcopre < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label12;
    }
    else
    {
        cout << "Mam Kausar Cooperation Marked by " << name << " is = " << mamKausarcopre << endl;
    }
    /* Entering Mam Aeman Presentation and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
    cout << "Enter Data Regarding Mam Aeman Ok!\n";
Label13:
    cout << "Mam Aeman Presentation  = ";
    while (!(cin >> mamAemanpre))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamAemanpre > 10 || mamAemanpre < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label13;
    }
    else
    {
        cout << "Mam Aeman Presentation Marked by " << name << " is = " << mamAemanpre << endl;
    }
    /* Entering Mam Aeman Behaviour and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label14:
    cout << "Mam Aeman Behaviour  = ";
    while (!(cin >> mamAemanbeha))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamAemanbeha > 10 || mamAemanbeha < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label14;
    }
    else
    {
        cout << "Mam Aeman Behaviour Marked by " << name << " is = " << mamAemanbeha << endl;
    }
    /* Entering Mam Aeman Cooperation and assuring that it should be
    Less than 11 and greater than -1 and should in integer value*/
Label15:
    cout << "Mam Aeman Cooperation  = ";
    while (!(cin >> mamAemancopre))
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\nEnter Again = ";

        cin.clear();
        cin.ignore(132, '\n');
    }
    if (mamAemancopre > 10 || mamAemancopre < 0)
    {
        cout << "Error! Number should Maximum 10 and Minimum 0 and should in integer number!\n";
        goto Label15;
    }
    else
    {
        cout << "Mam Aeman Cooperation Marked by " << name << " is = " << mamAemancopre << endl;
    }
    // Calculate Total
    sirDalerTotal = sirDalerpre + sirDalerbeha + sirDalercopre;
    mamMalikaTotal = mamMalikapre + mamMalikacopre + mamMalikabeha;
    mamAemanTotal = mamAemanpre + mamAemanbeha + mamAemancopre;
    mamKausarTotal = mamKausarpre + mamKausarbeha + mamKausarcopre;
    mamSunniaTotal = mamSunniapre + mamSunniabeha + mamSunniacopre;
    // Calculate Highest
    sirDalerPer = (sirDalerTotal / 30) * 100;
    mamKausarPer = (mamKausarTotal / 30) * 100;
    mamAemanPer = (mamAemanTotal / 30) * 100;
    mamMalikaPer = (mamMalikaTotal / 30) * 100;
    mamSunniaPer = (mamSunniaTotal / 30) * 100;
    // Showing Result of Highest Percentage or Equal or Two or Three Equal
    if ((sirDalerPer == mamMalikaPer) && (sirDalerPer == mamSunniaPer) && (sirDalerPer == mamAemanPer) && (sirDalerPer == mamKausarPer))
    {
        cout << "\n\nAll The Teacher Have Equal Ranking, Thanks !\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamAemanPer == mamMalikaPer == mamKausarPer)
    {
        cout << "\n\nMam Sunnia,Mam Aeman,Mam Malika and Kausar are equally ranked are are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamAemanPer == mamMalikaPer == sirDalerPer)
    {
        cout << "\n\nMam Sunnia,Mam Aeman,mam Malika and Sir Daler are Equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamAemanPer == mamMalikaPer == sirDalerPer)
    {
        cout << "\n\nMam Sunnia,Mam Aeman,Mam Malika and Sir Daler are Equally ranked and area at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamAemanPer == mamMalikaPer == sirDalerPer)
    {
        cout << "\n\nMam Sunnia,Mam Aeman ,Mam Malika and Sir Daler are Equally Ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamAemanPer == mamMalikaPer)
    {
        cout << "\n\nMam Sunnia,Mam Aeman and Mam Malika are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamAemanPer == mamKausarPer)
    {
        cout << "\n\nMam Sunnia,Mam Aemen and Mam Kausar are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamAemanPer == sirDalerPer)
    {
        cout << "\n\nMam Sunnia,Mam Aeman and Sir Daler are equally Ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamMalikaPer == mamKausarPer)
    {
        cout << "\n\nMam Sunnia ,Mam Malikaa and Mam Kausar are Equally ranked and are at Top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamMalikaPer == sirDalerPer)
    {
        cout << "\n\nMam Sunnia,Mam Malika and Sir Daler are Equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamKausarPer == sirDalerPer)
    {
        cout << "\n\nMam Sunnia,Mam Kausar and Sir Daler are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamAemanPer == mamMalikaPer == mamKausarPer)
    {
        cout << "\n\nMam Meman,Mam Malika and Mam Kausar are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamAemanPer == mamMalikaPer == sirDalerPer)

    {
        cout << "\n\nMam Aeman,Mam Malikaaa and Sir Daler are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamMalikaPer == mamKausarPer == sirDalerPer)
    {
        cout << "\n\nMam Malika,Mam Kaussar and Sir Daler are Equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamAemanPer)
    {
        cout << "\n\nMam Sunnia and Mam Aeman Are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamMalikaPer)
    {
        cout << "\n\nMam Sunnia and Mam Malika are Equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == mamKausarPer)

    {
        cout << "\n\nMam Sunnia and Man Kausar are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamSunniaPer == sirDalerPer)
    {
        cout << "\n\nMam Sunnia and Sir Daler are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamAemanPer == mamMalikaPer)
    {
        cout << "\n\nMam Aeman and Mam Malika equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamAemanPer == mamKausarPer)
    {
        cout << "\n\nMam Aeman and Mam Kausar are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamAemanPer == sirDalerPer)

    {
        cout << "\n\nMam Aeman and Sir Daler are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamMalikaPer == mamKausarPer)
    {
        cout << "\n\nMam Malika and Mam Kausar are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamMalikaPer == sirDalerPer)
    {
        cout << "\n\nMam Malika and Sir Daler are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
    else if (mamKausarPer == sirDalerPer)
    {
        cout << "\n\nMam Kausar and Sir Daler are equally ranked and are at top!\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }

    else if ((sirDalerPer > mamKausarPer) && (sirDalerPer > mamAemanPer) && (sirDalerPer > mamMalikaPer) && (sirDalerPer > mamSunniaPer))

    {
        cout << "\n\nSir Daler is Ranked First with  " << sirDalerPer << "%" << endl
             << endl;
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n";
    }
    else if ((mamMalikaPer > mamKausarPer) && (mamMalikaPer > mamAemanPer) && (mamMalikaPer > sirDalerPer) && (mamMalikaPer > mamSunniaPer))
    {
        cout << "\n\nMam Malika is Ranked First with  " << mamMalikaPer << "%" << endl
             << endl;
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n";
    }
    else if ((mamSunniaPer > mamKausarPer) && (mamSunniaPer > mamAemanPer) && (mamSunniaPer > sirDalerPer) && (mamSunniaPer > mamMalikaPer))
    {
        cout << "\n\nMam Sunnia is Ranked First with  " << mamSunniaPer << "%" << endl
             << endl;
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n";
    }
    else if ((mamKausarPer > mamSunniaPer) && (mamKausarPer > mamAemanPer) && (mamKausarPer > sirDalerPer) && (mamKausarPer > mamMalikaPer))
    {
        cout << "\n\nMam Kausar is Ranked First with  " << mamKausarPer << "%" << endl
             << endl;
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n";
    }
    else if ((mamAemanPer > sirDalerPer) && (mamAemanPer > mamSunniaPer) && (mamAemanPer > mamKausarPer) && (mamAemanPer > mamMalikaPer))
    {
        cout << "\n\nMam Aeman is Ranked First with  " << mamAemanPer << "%" << endl
             << endl;
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n";
    }
    else
    {
        cout << "\n\n\nUnexpected Error in Programm!!!!!! Run Again and Check Your Result\n\n\n";
        cout << "Thanks For Choosing Raheel's Programm to Rank Teachers\nUpdated Version of This Programm is Comming Soon\nGood Bye!\n\n";
    }
}
/*Programm is Fully AutoMated,YOu Can Check it by giving it different inputs
that are not according to required input values, Hope it will not make Hopeless you!

        Total Coding by : M.Raheel(Student of Software Engineering,The IUB)
        Respected Teacher make me able
        to write This Programm: Pro Dr-Daler Ali(lecturer in IUB,Software Engineering)
        */
