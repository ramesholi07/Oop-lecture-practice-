#include <iostream>
using namespace std;

class complex
{
    float real, imag;
   
   public:
   void get_data()
   {
     cout <<"enter the real and imaginary parts of complex : "<<endl;
     cin>>real>>imag;
   }

   void show_data()
   {
    cout<<real<<"+i"<<imag<<endl;
   }

 friend complex product(complex,complex);
};

complex product (complex cc1,complex cc2)
{
    complex temp;
    temp.real = (cc1.real*cc2.real)-(cc1.imag*cc2.imag);
    temp.imag=(cc1.real*cc2.imag)+(cc1.imag*cc2.real);
    return temp;
}

int main()
{
    complex c1,c2,c3;
    c1.get_data();
    c1.show_data();
    cout<<endl;
    c2.get_data();
    c2.show_data();
    cout<<endl;
    c3=product(c1,c2);
    cout<<"product: ";
    c3.show_data();
    return 0;

}

