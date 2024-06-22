// program to enter the name and age of two person and find the elder person using this pointer
#include <iostream>
#include <cstring>
using namespace std;

class person
{
    string name;
    int age;
    public:
    person ()
    {
        name='\0';
        age=0;
    }

    person(string n,int a):name(n),age(a){}

    void display ()
    {
        cout<<"NAME: "<<name<<endl<<"AGE: "<<age<<endl;
    }

    person compare( person n)
    {
        if (this->age < n.age)  return n;
        else  return *this;
    

    }

};


int main()
{
    person p1("Ramesh_oli",21),p2("swagat_nepal",20),p3;
    p3=p2.compare(p1);
    p3.display();
    return 0;
}