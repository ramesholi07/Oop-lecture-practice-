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
    cout << ")";
}

int main()
{
    int size;
    cout << "enter the size : ";
    cin >> size;

    Vector V(size);

    V.get_input();
    cout << "\nbefore changing elements : " << endl;
    V.display();

    V.change_element(2, 5); // overwrite the value with 5 at index 2
    cout << "\nafter changing elements : " << endl;
    V.display();

    V.scaler_multiply(2); // multiply all the elements of vector with 2
    cout << "\nafter multiplying with scaler number : " << endl;
    V.display();

    return 0;
}
