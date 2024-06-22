// program that shows the use of new operator in construtor >>>> dynamic constructor
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *name;
    int length;
    public:
    String ()
    {
        length=0;
        name=new char[length+1];
        name[0]='\0';
    }

    String ( const char *s)
    {
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);
    }

    ~String()
    {
        delete []name;
        cout<<"object destroyed: "<<endl;
    }

    void display ();

    friend String  join(String &, String &);

};

void String::display()
{
    cout<<name<<endl;
}

String join (String &s1,String &s2)
{     
    String s3;
    s3.length=s1.length+s2.length;
    delete[] s3.name;
    s3.name =new char[s3.length+1];
    strcpy(s3.name,s1.name);
    strcat(s3.name,s2.name);
    return s3;
    
}

int main()
{
    String s1("ram"),s2("oli"),s3;
    s1.display();
    cout<<endl;
    s2.display();
    s3=join(s1,s2);
    s3.display();
    return 0;
}