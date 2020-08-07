
#include<iostream>
#include"person.h"
#include<conio.h>
#include"string.h"
using namespace std;

person::person()
{

}

void person::setchangeAddress()
{
    char name;

    cout<<"\t\t\t**********************************************************************************"<<endl;
    cout<<endl<<"\t\t\tDo you want to change Address? If yes, then type 'Y' otherwise type 'N'."<<endl;
    cin>>name;
    if(name=='Y' || name == 'y')
    {
    cout<<endl<<"\t\t\tPlease type new Address: ";
    cin.ignore();
    getline(cin,changeAddress);
cout<<"\t\t\t**********************************************************************************"<<endl;
    }
}
string person::getchangeAddress()
{
    return changeAddress;
}


