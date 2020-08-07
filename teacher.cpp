
#include<iostream>
#include"teacher.h"
#include<conio.h>
#include"string.h"
using namespace std;
teacher:: teacher()
{

}
void teacher::setteachingcourse()
{
    cout<<"\tSelect An  Add course"<<endl;
    cout<<"\tThere are three Course are Available "<<endl<<endl;
    cout<<"\t1. Object Oriented Programming"<<endl;
    cout<<"\t2. Digital Logic And Design"<<endl;
    cout<<"\t3. Arabic "<<endl;
    cout<<"\tEnter the Course number : ";
    char inputa;
    cin>>inputa;

    if (inputa == '1')
    {
        cout<<"you are add  this course: Object Oriented Programming";

    }
    else if (inputa == '2')
    {
        cout<<"you are add  this course: Digital Logic And Design";

    }
  else if (inputa == '3' )
    {
       cout<<"you are add  this course: Arabic"<<endl<<endl<<endl;

    }

}



void teacher::setcourseremove()
{
    char name;
    cout<<endl<<"\t\t\t**********************************************************************************"<<endl;
    cout<<endl<<"\t\t\tDo you want to Remove course? If yes, then type 'Y' otherwise type 'N'."<<endl;
    cin>>name;
    if(name=='Y' || name == 'y')
    {
            cout<<"\tSelect  remove An course"<<endl;
    cout<<"\tThere are three Course are Available "<<endl<<endl;
    cout<<"\t1. Object Oriented Programming"<<endl;
    cout<<"\t2. Digital Logic And Design"<<endl;
    cout<<"\t3. Arabic "<<endl;
    cout<<"\tEnter the Course number : ";
    char inputa;
    cin>>inputa;

    if (inputa == '1')
    {
        cout<<"you are add  this course: Object Oriented Programming";

    }
    else if (inputa == '2')
    {
        cout<<"you are add  this course: Digital Logic And Design";

    }
  else if (inputa == '3' )
    {
       cout<<"you are remove  this course: Arabic"<<endl<<endl<<endl;

    }


}
}
string teacher::getcourseremove()
{
    return courseremove;
}


