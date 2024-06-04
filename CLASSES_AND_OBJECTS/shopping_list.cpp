// PROGRAM TO MAKING LIST OF SHOPPING ITEMS AND DISPLAYING FINAL BILL....
#include <iostream>
using namespace std;
const int n=50;
class order
{
    int item_code[n];
    float item_price[n];
    int count; 
    public:
    char ch;
    void CNT (){count=0 ;}
    void add_item();
    void remove_item();
    void display_item();
    void display_sum();
    void check(){ch='y';}
};

void order::add_item()   // Records the item_code and item_price form the user...
{
    cout<<"Enter item code: ";
    cin>>item_code[count];
    
    cout<<"Enter item price: ";
    cin>>item_price[count];

    count++;
    cout<<"\n Do you want to add  more items: "<<endl<<" if yes enter 'y'"<<" :: "<<"else enter 'n' ->> ";
    cin>>ch;
    cout<<endl;
}

void order::remove_item()  // Remove the initially added item(-> sets the price of that item zero)...
{
    int a;
    cout<<"Enter the item code you want to remove : "<<endl;
    cin>>a;

    for(int i=0;i<count;i++)
    {
      if (item_code[i]==a)
      {
        item_price[i]==0;
        break;
      }
    }
    cout<<"\n your enter item has been deleted: "<<endl;
}

void order::display_item()     // displays the items that  the customer ordered...
{
    cout<<"Displaying items with prices: \n";
    cout<<"item_code       item_price";
    for(int i=0;i<count;i++)
    {   
        cout<<endl<<item_code[i]<<"\t\t"<<item_price[i];
    }
    cout<<endl;
}

void order::display_sum()    // displays total sum of items...
{
  float sum=0;
  cout<<"\nDisplaying bill :\n";
  for (int i=0;i<count;i++)
  {
    sum+=item_price[i];
  }
  cout<<"Total sum of all the ordered items: "<<sum<<endl;
}

int main()
{
    order p1;
    p1.CNT();
    int x;
    p1.check();
cout<<"\nwelcome to unique shopping center: "<<endl;


    do                                                         // do...while loop 
    {
        cout<<"\nEnter any number mentioned below: "<<endl;
        cout<<"1: For adding items "<<endl;
        cout<<"2: For removing any ordered items "<<endl;
        cout<<"3: For  making list of all ordered items "<<endl;
        cout<<"4: For displaying bill "<<endl;
        cout<<"5: Exit"<<endl;
        cin>>x;
        cout<<endl;

        {
            switch(x)              
            {
                case 1:
                    p1.add_item();
                    break;
                case 2:
                    p1.remove_item();
                    break; 
                case 3:
                    p1.display_item();
                    break;
                case 4:
                    p1.display_sum();
                    break;    
                case 5:
                    break;
                default:
                    cout<<"INVALID NUMBER :"<<"\n Enter number again :"<<endl; 
            }
        }

    }while(x!=5&&(p1.ch=='y'||p1.ch=='Y'));

    if(p1.ch!='y'||p1.ch!='Y')
    {
        p1.display_item();
        p1.display_sum();   
        cout<<"\n Thank you for shopping:";
    }
 
    return 0;
}


