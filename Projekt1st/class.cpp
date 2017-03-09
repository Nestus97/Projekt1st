#include <iostream>
#include <cstring>
#include "class.h"

using namespace std;

void Person::WhoAreYou()
{
    cout<<"CREATING IN PROCESS..."<<endl;
    cout<<"name: ";
    cin>>name_;
    cout<<"surname: ";
    cin>>surname_;
    cout<<"alias: ";
    cin>>alias_;
}

void Person::Return()
{
    string name1="";
    string surname1="";
    string alias1="";
    for(int i=name_.length()-1;i>=0;i--)
    {
        name1+=name_[i];
    }
    name_=name1;
    for(int i=surname_.length()-1;i>=0;i--)
    {
        surname1+=surname_[i];
    }
    surname_=surname1;
    for(int i=alias_.length()-1;i>=0;i--)
    {
        alias1+=alias_[i];
    }
    alias_=alias1;
}

void Person::Write()
{
    cout<<name_<<" "<<surname_<<" \""<<alias_<<"\""<<endl;
}
