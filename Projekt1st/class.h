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
    void Write(); //wypisuje osobe
};
