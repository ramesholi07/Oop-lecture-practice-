#include <iostream>
#include <vector>
using namespace std;

class Vector
{
    vector<int> num;

public:
    // constructor to create vector of given size
    Vector(int size) : num(size) {}

    void get_input(); // function that takes input form user
    void change_element(int, int);
    void scaler_multiply(int);
    void display();
    friend Vector addition(Vector, Vector);
};

void Vector::get_input()
{
    cout << "enter the elements of vector : " << endl;
    for (int i = 0; i < num.size(); i++)
    {
        cout << "num" << "[" << i << "]" << "= ";
        cin >> num[i];
    }
}

void Vector::change_element(int index, int value) // function that change the value at any index
{
    if (index >= 0 && index < num.size())
    {
        num[index] = value;
    }
    else
    {
        cout << "entered index is out of bound...." << endl;
    }
}

void Vector::scaler_multiply(int x) // multipy the elements with scaler value
{
    for (int i = 0; i < num.size(); i++)
    {
        num[i] *= x;
    }
}

void Vector::display() // display the elements of vector
{
    cout << "OUTPUT:: " << endl;
    cout << "(";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i];
        if (i < num.size() - 1)
        {
            cout << ",";
        }
    }
    cout << ")"<<endl;
}

Vector addition(Vector v1, Vector v2)
{
    int size = v1.num.size();
    Vector temp(size);
    for (int i = 0; i < size; i++)
    {
        temp.num[i] = v1.num[i] + v2.num[i];
    }
    return temp;
}

int main()
{
    int size;
    cout << "enter the size : ";
    cin >> size;

    Vector V1(size);
    Vector V2(size);
    Vector V3(size);

    V1.get_input();
    cout << "ELEMENTS OF VECTOR >>> OBJECT V1:::" << endl;
    V1.display();
    cout << endl;

    V2.get_input();
    cout << "ELEMENTS OF VECTOR  >>> OBJECT V2:::" << endl;
    V2.display();
    cout << endl;

    V3 = addition(V1, V2);
    cout << "ADDING TWO VECTOR'S ELEMENTS : " << endl;
    V3.display();
    return 0;
}
