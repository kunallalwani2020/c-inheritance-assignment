#include<iostream>
#include"mainfile.h"
#include"string.h"
using namespace std;


mainfile::mainfile()
{

}
void mainfile::getname()
{



    cout<<"\t\t\tEnter the name:  ";
    cin.ignore();
    getline(cin,name);

}
string mainfile::setname()
{
    return name;

}

void mainfile::getbirth()
{
    cout<<"\t\t\tEnter the Date of Birth: ";
    cin.ignore();
    getline(cin,birth);
}
string mainfile::setbirth()
{
    return birth;
}
void mainfile::getaddress()
{
    cout<<"\t\t\tEnter the Address:   ";
    cin.ignore();
    getline(cin,address);
}
string mainfile::setaddress()
{
    return address;
}
void mainfile::getId()
{
    cout<<"\t\t\tEnter the ID:    ";
    getline(cin,Id);
}
string mainfile::setId()
{
    return Id;
}
void mainfile::getemail()
{
    cout<<"\t\t\tEnter Email Address: ";
    cin.ignore();
    getline(cin,email);
}
string mainfile::setemail()
{
    return email;
}
void mainfile::getphone()
{
    cout<<"\t\t\tEnter Phone Number:  ";
    cin.ignore();
    getline(cin,phone);
}
string mainfile::setphone()
{
    return phone;
}

void mainfile:: getmail()
{
    cout<<"\t\t\tEnter the mail Address:  ";
    cin.ignore();
    getline(cin,mail);
}
string mainfile::  setmail()
{
    return mail;
}

