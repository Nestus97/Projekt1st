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

void Person::ChangeVowel()
{
    for(int i=0;i<name_.length();i++)
    {  //tu sprawdze wszystkie samogloski zarowno wielkie jak i male
        if((name_[i]=='a')||(name_[i]=='e')||(name_[i]=='i')||(name_[i]=='o')||(name_[i]=='u')||(name_[i]=='y')||(name_[i]=='A')||(name_[i]=='E')||(name_[i]=='I')||(name_[i]=='O')||(name_[i]=='U')||(name_[i]=='Y'))
        name_[i]='z';
    }
    for(int i=0;i<surname_.length();i++)
    {  //tu sprawdze wszystkie samogloski zarowno wielkie jak i male
        if((surname_[i]=='a')||(surname_[i]=='e')||(surname_[i]=='i')||(surname_[i]=='o')||(surname_[i]=='u')||(surname_[i]=='y')||(surname_[i]=='A')||(surname_[i]=='E')||(surname_[i]=='I')||(surname_[i]=='O')||(surname_[i]=='U')||(surname_[i]=='Y'))
        surname_[i]='z';
    }  //tu sprawdze wszystkie samogloski zarowno wielkie jak i male
    for(int i=0;i<alias_.length();i++)
    {
        if((alias_[i]=='a')||(alias_[i]=='e')||(alias_[i]=='i')||(alias_[i]=='o')||(alias_[i]=='u')||(alias_[i]=='y')||(alias_[i]=='A')||(alias_[i]=='E')||(alias_[i]=='I')||(alias_[i]=='O')||(alias_[i]=='U')||(alias_[i]=='Y'))
        alias_[i]='z';
    }
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
