#include <iostream>
#include <cstring>
using namespace std;

class Time
{
  int hrs, min, sec;
  char ch[4];

public:
  Time() : hrs(0), min(0), sec(0), ch("...") {}
  void get_data()
  {
    cout << "enter time (hrs:min:sec)--- hrs<24::" << endl;
    cin >> hrs >> min >> sec;
    format_conversion();
  }
  void show_data()
  {
    cout << hrs << ":" << min << ":" << sec << " " << ch << endl;
  }

  void format_conversion()
  {
    hrs %= 24;
    {
      if (sec >= 60)
      {
        min += sec / 60;
        sec %= 60;
      }

      if (min >= 60)
      {
        hrs += min / 60;
        min %= 60;
      }
    }

    if (hrs < 12)
    {
      strcpy(ch, "A.M");
      if (hrs==0) hrs=12;
    }
    else
    {
      strcpy(ch, "P.M");
      hrs %= 12;
      if (hrs == 0)
      {
        hrs = 12;
      }
    }
  }
};

int main()
{
  Time t1, t2;
  t1.show_data();
  cout << endl;
  t2.get_data();
  t2.show_data();
  return 0;
}