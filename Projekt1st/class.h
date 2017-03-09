#include <iostream>

using namespace std;

class Person
{
private:
    string name_;
    string surname_;
    string alias_;

public:
    void WhoAreYou(); //pyta o dane osoby
    void ChangeVowel(); //zmienia samogloski na 'z'
    void Return(); //odwraca litery w slowach
    void Write(); //wypisuje osobe

};
