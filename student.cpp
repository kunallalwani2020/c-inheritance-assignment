#include<iostream>
#include"student.h"
#include<conio.h>
#include"string.h"
using namespace std;
student::student()
{
}

void student::setchangeemailAddress()
{
    char name;

    cout<<"\t\t\t**********************************************************************************"<<endl;
    cout<<endl<<"\t\t\tDo you want to change Email Address? If yes, then type 'Y' otherwise type 'N'."<<endl;
    cin>>name;
    if(name=='Y' || name == 'y')
    {
    cout<<endl<<"\t\t\tPlease type new Email Address: ";
    cin.ignore();
    getline(cin,changeemail);
    cout<<"\t\t\t**********************************************************************************"<<endl;
    }
}
string student::getchangeemailAddress()
{
    return changeemail;
}
void student::setchangemailAddress()
{
     char name;

    cout<<"\t\t\t**********************************************************************************"<<endl;
    cout<<endl<<"\t\t\tDo you want to change Mail Address? If yes, then type 'Y' otherwise type 'N'."<<endl;
    cin>>name;
    if(name=='Y' || name == 'y')
    {
    cout<<endl<<"\t\t\tPlease type new Mail Address: ";
    cin.ignore();
    getline(cin,changemail);
    cout<<"\t\t\t**********************************************************************************"<<endl;
    }
}
string student::getchangemailAddress()
{
    return changemail;
}

void student::setchangephone()
{
     char name;

    cout<<"\t\t\t**********************************************************************************"<<endl;
    cout<<endl<<"\t\t\tDo you want to change Phone Number? If yes, then type 'Y' otherwise type 'N'."<<endl;
    cin>>name;
    if(name=='Y' || name == 'y')
    {
        cout<<endl<<"\t\t\tPlease type new Phone Number: ";
       cin.ignore();
    getline(cin,changephone);
cout<<"\t\t\t**********************************************************************************"<<endl;
    }
}
string student::getchangephone()
{
    return changephone;
}

void student::setcourse()
{

    for(int i=1;i<=2;i++)
    {
        cout<<"Enter the course you are enroll  "<<i<<endl;
        getline(cin, course[i]);

    }
  for(int temp=1;temp<=2;temp++)
    {
    cout<<"course enroll:   "<<course[temp]<<endl<<endl;
    }


}
