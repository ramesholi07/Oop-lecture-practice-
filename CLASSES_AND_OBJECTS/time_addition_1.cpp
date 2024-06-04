#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
    int hour;
    int min;
    int sec;

    public:
    Time()
    {
        hour=0;
        min=0;
        sec=0;
    }
   void get_Time();
   void show_Time();
   friend class Time_add;
};

   void Time::get_Time()
   {
    cout<<"entre the Time (format hour:min:sec) : "<<endl;
    cin>>hour>>min>>sec;
   }

    void Time::show_Time()
   {
    cout<< "Time: " << setw(2) <<setfill('0') << hour << ":" << setw(2)
     << setfill('0') << min<<":" << setw(2) << setfill('0') << sec << endl;
   }

   class Time_add
   {
    public:
    Time add(Time t1,Time t2)
    {
      Time temp;
      temp.hour=t1.hour+t2.hour;
      temp.min=t1.min+t2.min;
      temp.sec=t1.sec+t2.sec;
      check(temp);
      return temp;
    }
  private:
    void check(Time &t)
    {
        if(t.sec>=60)
        {
            t.min+=t.sec/60;
            t.sec=t.sec%60;
        }

        if (t.min>=60)
        {
            t.hour+=t.min/60;
            t.min=t.min%60;
        }
        if (t.hour>=24)
        {
            t.hour=t.hour%24;
        }
    }
   };
   
   int main()
   {
     Time t1,t2,t3;
    Time_add ad ;
    t1.get_Time();
    t1.show_Time();
    t2.get_Time();
    t2.show_Time();
    t3=ad.add(t1,t2);
    cout<<"\nafter addition : ";
    t3.show_Time();
    return 0;
   }