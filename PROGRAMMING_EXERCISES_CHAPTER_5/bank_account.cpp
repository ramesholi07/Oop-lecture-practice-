// program to perform different banking services
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class bank_acc
{
  char name[20];
  double acc_num;
  char acc_type[20];
  double balance;

  public:
  void create_acc();
  void deposit();
  void balance_check();
  void withdraw();
  void display();
};

void bank_acc::create_acc()
{
    cout<<"enter account holder name : ";
    cin>>name;
    cout<<"enter account number : " ;
    cin>>acc_num;
    cout<<"enter account type(saving or current ) : ";
    cin>>acc_type;
    balance=0;   
}

void bank_acc::deposit()
{
  double x;
    cout<<"\nenter the amount you want to deposit : ";
    cin>>x;
    balance+=x;
}

void bank_acc:: balance_check()
{
    cout<<"\navailable balance : "<<fixed<<setprecision(0)<<balance;
}

void bank_acc:: withdraw()
{
    double x;
    cout<<"\nenter the amount you want to withdraw : ";
    cin>>x;
    balance-=x;
}

void bank_acc::display()
{   cout<<"PERSON'S ACCOUNT DETAIL : "<<endl;
    cout<<"\nAccount holder name : "<<name;
    cout<<"\naccount number : "<<fixed<<setprecision(0)<<acc_num;
    cout<<"\nAccount type: "<<fixed<<setprecision(0)<<acc_type;
    cout<<"\nAvailable balance : "<<balance;
}

int main ()
{
  bank_acc P1;
  P1.create_acc();
  P1.deposit();
  P1.balance_check();
  cout<<endl;
  P1.withdraw();
  P1.display();
  return 0;
}