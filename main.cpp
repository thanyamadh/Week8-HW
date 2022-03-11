#include <iostream>
#include <iomanip>

using namespace std;

struct Time
{
  int m,h,s;
};

void getTime(struct Time &x);
struct Time subtract(struct Time &x,struct Time &y);

void getTime(struct Time &x)
{
  cout<<"Hour: ";
  cin >> x.h;
  cout<<"Minute : ";
  cin >> x.m;
  cout<<"Second : ";
  cin >> x.s;
}

struct Time subtract(struct Time &y ,struct Time &x)
{
  int check;
  struct Time ans;
  ans.h = y.h-x.h;
  ans.m = y.m-x.m;
  ans.s = y.s-x.s;
  if(ans.m<0)
  {
    ans.h--;
    check=60;
    while(ans.m<0)
    {
      ans.m++;
      check--;
    }
    ans.m = check;
  }
  ans.s = y.s-x.s;
  if(ans.s<0)
  {
    ans.m--;
    check=60;
    while(ans.s<0)
    {
      check--;
      ans.s++;
    }
    ans.s = check;
  }
  return ans;
}

int main()
{
  struct Time t1,t2,t3;
  cout<<"What time was it?"<<endl;
  getTime(t1); // รับค่าเวลาเข้ามา
  cout<<"What time is it now?"<<endl;
  getTime(t2); // รับค่าเวลาเข้ามา
  t3=subtract(t2,t1); //t3=t2-t1
  cout<<"Time diff is ";
  cout<<setfill('0')<< setw(2) << t3.h <<":";
  cout<<setfill('0')<< setw(2) << t3.m <<":";
  cout<<setfill('0')<< setw(2) << t3.s <<endl;
}