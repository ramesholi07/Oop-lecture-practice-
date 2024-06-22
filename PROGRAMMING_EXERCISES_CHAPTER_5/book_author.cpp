// class for book which include author name, title,price,publisher
#include <iostream>
#include <cstring>
using namespace std;

class book
{
    char *title;
    char *author_name;
    char *publisher;
    float price;

public:
    book();
    book( const char *,  const char *,  const char *, float);
    book( const book&);
    void show_data();
    ~book();
};
book:: book()
    {
        int length = 0;
        title = new char[length + 1];
        title[0] = '\0';
        author_name = new char[length + 1];
        author_name[0] = '\0';
        publisher = new char[length + 1];
        publisher[0] = '\0';
        price = 0;
    }

book::book( const char *a,  const char *b,  const char *c, float d)
{
    int length;

    length = strlen(a);
    title = new char[length + 1];
    strcpy(title, a);

    length = strlen(b);
    author_name = new char[length + 1];
    strcpy(author_name, b);

    length = strlen(c);
    publisher = new char[length + 1];
    strcpy(publisher, c);

        price = d;
}
book::book(const book&b1)                     // deep copy constructor that allocate  different memory location for new object 
{
    title= new char[strlen(b1.title)+1];
    strcpy(title,b1.title);
    author_name = new char[strlen(b1.author_name)+1];
    strcpy(author_name,b1.author_name);
    publisher =new char[strlen(b1.publisher)+1];
    strcpy(publisher,b1.publisher);
    price =b1.price;
}

// book::book(const book &b1)       // swallow copy that share the same memory location that of original object
// {
//     title=b1.title;
//     author_name=b1.author_name;
//     publisher=b1.publisher;
//     price=b1.price;
//     strcpy(title,"ram");          // change made in title and it also change the original title name of original title

// }

void book::show_data()
{
    cout << "book detail::" << endl;
    cout << "TITLE: " << title << endl
         << "AUTHOR_NAME: " << author_name << endl
         << "PUBLISHER: " << publisher << endl
         << "price: " << price << endl;
}

book::~book()
{
    delete[] title;
    delete[] author_name;
    delete[] publisher;
}

int main()
{
    book s1("life","Ramesh_oli","insights",500),s2,s3(s1);
    cout<<endl;
    s1.show_data();
    cout<<endl;
    s2.show_data();
    cout<<endl;
    s3.show_data();
    return 0;
}