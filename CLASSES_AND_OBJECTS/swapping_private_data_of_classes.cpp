//Program to show how to use common friend function to exchange the private values of two classes
#include <iostream>
using namespace std;
class A;
class B
{
  int x;
  public:
  void set_value(int a) {x=a;}
  void display_value()
  {
    cout<<"x= "<<x<<endl;
  }

   friend void swap_value(A*,B*); // takes objects of class A and B as argument and perform swapping the private values
};

class A
{
    int y;
    public:
    void set_value(int b){y=b;}
    void display_value()
    {
        cout<<"y= "<<y<<endl;
    }
    friend void swap_value(A*,B*); 
};

void swap_value(A* a, B* b)
{
    int z;
    z= a->y;
    a->y=b->x;
    b->x=z;
    a->display_value();
    b->display_value();
}

int main ()
{
    A a;
    a.set_value(2);
    B b;
    b.set_value(7);
    cout<<"values before swapping : "<<endl;
    a.display_value();
    b.display_value();
    cout<<"\n values after swapping :"<<endl;
    swap_value(&a,&b);
    return 0;
}