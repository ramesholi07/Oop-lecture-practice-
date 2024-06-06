#include <iostream>
using namespace std;

class land
{
    int ropani,ana,paisa,dam;

    public:
    void get_data()
    {
        cout<<"enter the measurement of land(ropani:ana:paisa:dam) : "<<endl;
        cin>>ropani>>ana>>paisa>>dam;
    }
    
    void show_data()
    {
        cout<<"land measurement :  "<<endl<<ropani <<"ropani , "<<ana<<"ana , "<<paisa<<"paisa , "<<dam<<"dam "<<endl;
    }

    friend class land_add;
};

 class land_add
 {
    public:
    land addition(land l1,land l2)
    {
        land temp;
        temp.ropani =l1.ropani+l2.ropani;
        temp.ana =l1.ana+l2.ana;
        temp.paisa =l1.paisa+l2.paisa;
        temp.dam =l1.dam+l2.dam;

        if(temp.dam>=4)
        {
            temp.paisa+=temp.dam/4;
            temp.dam=temp.dam%4;
        }
        
        if(temp.paisa>=4)
        {
            temp.ana+=temp.paisa/4;
            temp.paisa=temp.paisa%4;
        }

        if(temp.ana>=16)
        {
            temp.ropani+=temp.ana/16;
            temp.ana=temp.ana%16;
        }
        return temp;

    }
 };

 int main()
 {
    land l1,l2,l3;
    land_add l4;
    l1.get_data();
    l1.show_data();
    l2.get_data();
    l2.show_data();
    l3=l4.addition(l1,l2);
    l3.show_data();
    return 0;

 }