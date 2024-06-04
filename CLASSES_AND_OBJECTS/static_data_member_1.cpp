#include <iostream>
using namespace std;

class  student 
{
    char name[20];
    int age ;
    static int count;

    public:
    void get_data()
    {
        cout<<"\nenter student name and age : "<<endl;
        cin>>name>>age;
        count++;
    }

    void print_data()
    {
        cout<<"\nstudent detail : "<<endl<<"name : "<<name<<endl<<"age : "<<age<<endl<<"count => "<<count<<endl;
    }
};
  
int student::count;

int main ()
{
    student s1,s2;
    s1.get_data();
    s1.print_data();
    s2.get_data();
    s2.print_data();
    return 0;
}