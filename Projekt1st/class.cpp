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

void Person::Write()
{
    cout<<name_<<" "<<surname_<<" \""<<alias_<<"\""<<endl;
}
