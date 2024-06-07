// program to illustrate the use pointer for data member and member function also pointer to objects
#include <iostream>
using namespace std;

class A
{
    int x,y;
    public:
    void set_data(int ,int );
    friend int sum(A);
};

void A::set_data(int a ,int b)
{
    x=a;
    y=b;
}

int sum(A r)
{
    int A::*px=&A::x;  // pointer to data member x
    int A::*py=&A::y;  // pointer to data member y
    A *po =&r;         // pointer to object 'r'
    int sum=r.*px + po ->*py;   // ===>> sum= r.x + r.y ;
    return sum;
}

int main()
{
    A a;
    void (A::*pf)(int ,int )=&A::set_data;    // pointer to member function set_data();
    (a.*pf)(10,20);                    // ===>> a.set_data(10,20);
    cout<<"sum = "<<sum(a)<<endl;

    A*po =&a;                            // pointer object 
    (po->*pf)(30,40);                    // ====>> a.set_data(30,40);
    cout<<"sum = "<<sum(a)<<endl;
    return 0;
}