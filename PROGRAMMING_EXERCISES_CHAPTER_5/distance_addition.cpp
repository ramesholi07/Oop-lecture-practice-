#include <iostream>
using namespace std;
class DB; // forward declaration of class DB
class DM  // class defination
{
    float meter;
    float centimeter;

public:
    DM() : meter(0), centimeter(0) {}
    DM(float x, float y) : meter(x), centimeter(y){};

    void get_data();
    void conversion1();
    friend float addition(DM &, DB &);
};

void DM::get_data()
{
    int x;
    do
    {
        cout << "enter any number mentioned below:: " << endl;
        cout << "1: distance in meter" << endl;
        cout << "2: distance in centimetre " << endl;
        cin >> x;

        if (x == 1)
        {
            cout << "enter the distance in meter:: ";
            cin >> meter;
        }
        else if (x == 2)
        {
            cout << "enter the distance in centimeter:: ";
            cin >> centimeter;
            meter = centimeter / 100;
        }
        else
        {
            cout << "invalid number.... enter again..." << endl;
        }
    } while (x != 1 && x != 2);
}

void DM::conversion1() // convert meter into feet
{
    meter = meter / 0.3048;
}

class DB // class defination
{
    float feet;
    float inch;

public:
    DB() : feet(0), inch(0) {}
    DB(float x, float y) : feet(x), inch(y){};

    void get_data();
    void conversion2();
    friend float addition(DM &, DB &);
};

void DB::get_data()
{
    int x;
    do
    {
        cout << "enter any number mentioned below:: " << endl;
        cout << "1: distance in feet" << endl;
        cout << "2: distance in inch" << endl;
        cin >> x;

        if (x == 1)
        {
            cout << "enter the distance in feet:: ";
            cin >> feet;
        }
        else if (x == 2)
        {
            cout << "enter the distance in inch:: ";
            cin >> inch;
            feet = inch / 12;
        }
        else
        {
            cout << "invalid number.... enter again..." << endl;
        }
    } while (x != 1 && x != 2);
}

void DB::conversion2() // convert meter into meter
{
    feet = feet * 0.3048;
}

float addition(DM &X, DB &Y)
{
    float add;
    add = X.meter + Y.feet;
    return add;
}

float convert_into_inch(float value)
{
    return value * 12;
}
int main()
{
    DM dis1;
    DB dis2;
    dis1.get_data();
    cout << endl;
    dis2.get_data();

    int x;
    cout << "\n choose approprite option below: ";
    cout << "\n1: display added  distances    in meter: ";
    cout << "\n2: display added  distances in centimeter: ";
    cout << "\n3: display added  distances   in feet: ";
    cout << "\n4: display added  distances   in inch: \n";
    cin >> x;

    if (x == 1 || x == 2)
    {
        dis2.conversion2();
        float value = addition(dis1, dis2);
        DM dis3(value, value * 100);
        if (x == 1)
        {
            cout << "added distance in meter :: " << value << endl;
        }
        else
        {
            cout << "added distance in centimeter :: " << value * 100 << endl;
        }
    }

    else if (x == 3 || x == 4)
    {
        dis1.conversion1();
        float value = addition(dis1, dis2);
        DB dis4(value, value * 12);
        if (x == 3)
        {
            cout << "added distance in feet :: " << value << endl;
        }
        else
        {
            cout << "added distance in inch :: " << value * 12 << endl;
        }
    }

    return 0;
}
