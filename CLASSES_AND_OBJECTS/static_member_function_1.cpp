#include <iostream>
using namespace std;

class complex
{
    float real,imag;
    static int count;
    public:

    static void increament ()
    {
        count++;
    }

    static void show_count()
    {
        cout<<"count=> "<<count<<endl;
    }
    void get_data()
    {
        cout <<"enter all data : "<<endl;
        cin>>real>>imag;
        increament();
    }
   
   void show_data()
   {
    cout<<real<<"+i"<<imag<<endl;
   }
};
 int complex::count;
int main()
{
    complex c1,c2;
    c1.get_data();
    c2.get_data();
    c1.show_data();
    complex::show_count();  // => c1.show_data();
    c2.show_data();
    c2. show_count();
    return 0;
}