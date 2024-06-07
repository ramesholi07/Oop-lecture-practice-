// program to illustrate the concepts of object as argument of function (pass by values , pass by reference)
#include <iostream>
using namespace std;

class complex
{
    int real;
    int imag;
    public:
    complex(): real(0),imag(0){};                           // default constructor where values are initilized with zero
    complex(int r,int i): real(r),imag(i){};   // parameterized constructor where values are initilized with
                                                                    // values passed as arguments

    void passby_value(complex obj1)  // PASS BY VALUE
    {
        obj1.real=1;
        obj1.imag=3;
        cout<<obj1.real<<"+i"<<obj1.imag;
    }

    void passby_ref_ptr(complex* obj1) // pass by reference using  object pointer 
    {
      obj1->real=4;
      obj1->imag=8;
      cout<<obj1->real<<"+i"<<obj1->imag;
        
    }
    
    void passby_ref_ref(complex &obj1) // pass by refrence using reference object
    {
       obj1.real=9;
       obj1.imag=6;
       cout<<obj1.real<<"+i"<<obj1.imag;
    }
    void print_data()
    {
        cout<<real<<"+i"<<imag<<endl;
    }

};

int main()
{
    complex o1(2,4);
    cout<<"\nPASS BY VALUE FOR OBJECT (o1):: "<<endl;
    cout<<"\nbefore passing argument :";
    o1.print_data();
    cout<<"after passing argument :: ";
    o1.passby_value(o1);
    cout<<"\noriginal parameter ::";
    o1.print_data();

    complex o2(3,2);
    cout<<"\nPASS BY REFERENCE USING POINTER FOR OBJECT (o1):: "<<endl;
    cout<<"\nbefore passing argument :";
    o2.print_data();
    cout<<"after passing argument :: ";
    o2.passby_ref_ptr(&o2);
    cout<<"\noriginal parameter ::";
    o2.print_data();

    complex o3(9,9);
    cout<<"\nPASS BY REFERENCE USING REFERENCE OBJECT FOR OBJECT (o1):: "<<endl;
    cout<<"\nbefore passing argument :";
    o3.print_data();
    cout<<"after passing argument :: ";
    o3.passby_ref_ref(o3);
    cout<<"\noriginal parameter ::";
    o3.print_data();
    
    return 0;
    
}