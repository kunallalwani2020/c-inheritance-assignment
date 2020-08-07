#include <iostream>
#include"course.h"
#include"string.h"
void personobject();
void studentobject();
void teacherobject();
void courseobject();
void mainfunction();
using namespace std;

int main()

{   system("Color 7c");
	mainfunction();
}

void mainfunction()
{
    system("CLS");
    cout<<"************************************************************************************************************************";
    cout<<"\t\t\tWelcome To CSC 104 – OBJECT-ORIENTED PROGRAMMING ASSIGNMENT 02"<<endl;
    cout<<"************************************************************************************************************************";
    cout<<endl;
    cout<<"\tStudent Name : Kirshan Lal"<<endl;
    cout<<"\tID : CSC-19F-046"<<endl;
    cout<<"\tSection : 2B"<<endl<<endl;

    cout<<"\tSelect An Option To Continue"<<endl;
    cout<<"\tThere are Four Class Available To Work On"<<endl<<endl;
    cout<<"\t1. Person"<<endl;
    cout<<"\t2. Student"<<endl;
    cout<<"\t3. Teacher"<<endl;
     cout<<"\t4. Course"<<endl;
    cout<<"\tEnter the Class Number Or Name To Continue : ";
    char inputa;
    cin>>inputa;
    if (inputa == '1')
    {
        personobject();

    }
    else if (inputa == '2')
    {
        studentobject();

    }
  else if (inputa == '3' )
    {
       teacherobject();

    }
     else if (inputa == '4' )
    {
       courseobject();

    }
}



    course m;
  void personobject()
{
	system("CLS");
	cout<<"************************************************************************************************************************";
    cout<<"\t\t\tWelcome  TO Person Class"<<endl;
    cout<<"************************************************************************************************************************";
    cout<<endl;

    system("Color 3F");
cout<<endl<<endl<<endl;
cout<<"\t\t\t------------------------"<<endl;
cout<<"\t\t\t (1) Person "<<endl;
cout<<"\t\t\t------------------------"<<endl;


    m.getname();
    m.getbirth();
    m.getaddress();
    m.setchangeAddress();
    system("Color 5F");
cout<<"\t\t\tName is:             "<<m.setname()<<endl;
cout<<"\t\t\tDate of Birth is:    "<<m.setbirth()<<endl;
cout<<"\t\t\tAddress is:          "<<m.setaddress()<<endl;
cout<<"\t\t\tChange Address:      "<<m.getchangeAddress()<<endl;
cout<<endl<<endl;
cout<<"#######################################################################################################################";
cout<<"#######################################################################################################################";
cout<<endl<<"\t\t\tEnter \'0\' to go to Main Menu & \'1\' to Exits /"<<endl;
cout<<"Enter : ";
    int userii;
    cin>>userii;
    if (userii == 1)
    {
    	while(true)
    	{
    		break;
		}

    }
    else
        {
        mainfunction();
        }
}





//---------------------------student----------------------------//

 void studentobject()
{
	system("CLS");


cout<<"************************************************************************************************************************";
cout<<"\t\t\tWelcome  TO Student Class"<<endl;
cout<<"************************************************************************************************************************";
cout<<endl;
    system("Color 0c");

cout<<endl<<endl<<endl;
cout<<"\t\t\t------------------------"<<endl;
cout<<"\t\t\t (2) Student"<<endl;
cout<<"\t\t\t------------------------"<<endl;
    m.getname();
    m.getId();
    m.getbirth();
    m.getaddress();
    m.getemail();
    m.getphone();
    m.getmail();
    m.setcourse();
    m.setchangeemailAddress();
    m.setchangemailAddress();
    m.setchangephone();



cout<<"Name is:                  "<<m.setname()<<endl;
cout<<"ID is:                    "<<m.setId()<<endl;
cout<<"Date of Birth is:         "<<m.setbirth()<<endl;
cout<<"Address is:               "<<m.setaddress()<<endl;
cout<<"Email Address is          "<<m.setemail()<<endl;
cout<<"Mail Address is           "<<m.setmail()<<endl;
cout<<"Phone Number is:          "<<m.setphone()<<endl;

cout<<"New Email Address is:     "<<m.getchangeemailAddress()<<endl;
cout<<"New Mail Address is:      "<<m.getchangemailAddress()<<endl;
cout<<"New Phone Number is:      "<<m.getchangephone()<<endl;

cout<<endl<<endl;
cout<<"#######################################################################################################################";
cout<<"#######################################################################################################################";
cout<<endl<<"\t\t\tEnter \'0\' to go to Main Menu & \'1\' to Exits /"<<endl;
cout<<"Enter : ";
    int useriii;
    cin>>useriii;
    if (useriii == 1)
    {
    	while(true)
    	{
    		break;
		}

    }
    else
        {
        mainfunction();
        }
}

//----------------------teacher--------------//

void teacherobject()
{{


	system("CLS");


cout<<"************************************************************************************************************************";
cout<<"\t\t\tWelcome  TO Teacher Class"<<endl;
cout<<"************************************************************************************************************************";
cout<<endl;
    system("Color 5c");

cout<<endl<<endl<<endl;
cout<<"\t\t\t------------------------"<<endl;
cout<<"\t\t\t (3) Teacher"<<endl;
cout<<"\t\t\t------------------------"<<endl;

    m.getname();

    m.getId();
    m.getbirth();
    m.getaddress();
    m.getemail();
    m.getphone();
    m.setteachingcourse();
    m.setcourseremove();
cout<<endl<<"Name is:             "<<m.setname()<<endl;
cout<<"ID is                "<<m.setId()<<endl;
cout<<"Date of Birth is:    "<<m.setbirth()<<endl;
cout<<"Address is:          "<<m.setaddress()<<endl;
cout<<"Email Address is     "<<m.setemail()<<endl;
cout<<"Phone Number is:     "<<m.setphone()<<endl;
cout<<endl<<endl;
    cout<<"#######################################################################################################################";
    cout<<"#######################################################################################################################";
    cout<<endl<<"\t\t\tEnter \'0\' to go to Main Menu & \'1\' to Exits /"<<endl;
    cout<<"Enter : ";
    int useriii;
    cin>>useriii;
    if (useriii == 1)
    {
    	while(true)
    	{
    		break;
		}

    }
    else
        {
        mainfunction();
        }
}
}



//-------------------------------course----------------------------//
void courseobject()
{{


	system("CLS");


cout<<"************************************************************************************************************************";
cout<<"\t\t\tWelcome  TO Course Class"<<endl;
cout<<"************************************************************************************************************************";
cout<<endl;
    system("Color 2F");


cout<<endl<<endl<<endl;
cout<<"\t\t\t------------------------"<<endl;
cout<<"\t\t\t (4) Course"<<endl;
cout<<"\t\t\t------------------------"<<endl;
   m.setcoursename();
   m.setcode();
   m.setnumberstd();
   m.setteachercourse();
   m.setenroll();
   m.setchangeteacher();
   m.setdeenroll();
cout<<"Teacher course:              "<<m.getteachercourse()<<endl;
cout<<"Student enroll:              "<<m.getenroll()<<endl;
cout<<"Number of De Enroll:         "<<m.getdeenroll()<<endl;
//cout<<"Total Student:               "<<m.getnumberstd()<<endl;
cout<<endl<<endl;
cout<<"#######################################################################################################################";
cout<<"#######################################################################################################################";
cout<<endl<<"\t\t\tEnter \'0\' to go to Main Menu & \'1\' to Exits /"<<endl;
cout<<"Enter : ";
    int useriii;
    cin>>useriii;
    if (useriii == 1)
    {
    	while(true)
    	{
    		break;
		}

    }
    else
        {
        mainfunction();
        }
}
}



