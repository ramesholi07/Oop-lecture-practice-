#include <iostream>
using namespace std;
class complex
{
    float real,imag;
    public:
    complex()
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
    friend class complex_sum;
};

class  complex_sum
{
    public:
    complex addition(complex cc1,complex cc2)
    {
        complex temp;
        temp.real=cc1.real+cc2.real;
        temp.imag=cc1.imag+cc2.imag;
        return temp;
    }
};

int main()
{
    complex c1(2,3),c2(4,5),c3;
    complex_sum cs;
    c3= cs.addition(c1,c2);
    c3.show_data();
    return 0;
}
