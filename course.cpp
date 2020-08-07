#include<iostream>
#include"course.h"
#include<conio.h>
#include"string.h"
using namespace std;
 course::course()
 {
 }
void course::setcoursename()
 {

    string s1, s2, result;

    cout << "Enter Course name 1: ";
    cin.ignore();
    getline (cin, s1);

    cout << "Enter course name 2: ";
    getline (cin, s2);
    result=s1+"     &   "+s2;
    cout<<"Course name: "<<result<<endl;
 }

 void course::setcode()
 {

    string s1,s2,result;

    cout << "Enter Course Code 1: ";
    cin.ignore();
    getline (cin, s1);

    cout << "Enter course Code 2: ";

    getline (cin, s2);
    result=s1+s2;
    cout<<"Course code: "<<result<<endl;
 }
 void course::setnumberstd()
 {
       int s1, s2;
       int result;

    cout << "Number the student Course name 1: ";


    cin>>s1;
    cin.ignore();
    cout << "Number the student  course name 2: ";

    cin>>s2;
    cin.ignore();
    result = s1+s2;
    cin.ignore();
    cout<<"Number of student: "<<result<<endl;
 }



void course::setteachercourse()
 {
     string s1, s2, result;
     cout<<"Enter the name of teacher of course 1 :  "<<endl;
     cin.ignore();
     getline(cin,s1);
     cout<<"Enter the name of teacher course 2:   "<<endl;
     getline(cin,s2);
     result=s1+"    &   "+s2;
     cout<<"Teacher name:"<<result<<endl;
 }
 string course::getteachercourse()
 {
     return code;
 }




 void course::setenroll()
 {
     cout<<"How many student enroll:    ";
     getline(cin,code);
 }
 string course::getenroll()
 {
     return code;
 }
void course::setchangeteacher()
{
     char name;

    cout<<"\t\t\t**********************************************************************************"<<endl;
    cout<<endl<<"\t\t\tDo you want to change teacher name? If yes, then type 'Y' otherwise type 'N'."<<endl;
    cin>>name;
    if(name=='Y' || name == 'y')
    {

        int i;
        for(i=0;i<=2;i++)
            cin.ignore();
    cout<<endl<<"\t\t\tPlease type new teacher name : ";
    cin.ignore();
    getline(cin,co[i]);
   cout<<"new teacher name is:   "<<co[i]<<endl<<endl;
   cout<<"\t\t\t**********************************************************************************"<<endl;
}
}
void course::setdeenroll()
{
    cout<<"Enter the number of De enroll student:   ";
    getline(cin,code);
}
string course::getdeenroll()
{
    return code;
}
