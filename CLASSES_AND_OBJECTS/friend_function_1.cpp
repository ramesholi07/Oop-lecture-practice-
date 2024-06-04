#include <iostream>
using namespace std;

class complex
{
    float real,imag;

    public:
    complex ()
    {
        real=0;
        imag=0;
    }

    complex(float r,float i)
    {
        real=r;
        imag=i;
    }

  void show_data()
  {
    cout<<real<<"+i"<<imag<<endl;
  }

// friend complex addition(complex ,complex);

complex addition(complex cc1,complex cc2)
{
    // complex temp;
    real=cc1.real+cc2.real;
    imag=cc1.imag+cc2.imag;
    // return temp;
}
};

int main()
{
    complex c1(2,4),c2(3,5),c3;
    c3.addition(c1,c2);
    c1.show_data();
    c2.show_data();
    c3.show_data();
    return 0;
}