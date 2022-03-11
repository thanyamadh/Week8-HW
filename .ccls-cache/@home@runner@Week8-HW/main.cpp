#include <iostream>
#include <iomanip>

using namespace std;

struct Time
{
  int m,h,s;
};

void getTime(struct Time);
struct Time subtract(struct Time,struct Time);

void getTime(struct Time x)
{
  x = new int;
  cout<<"Minute : ";
  cin >> x.m;
  cout<<"Hour: ";
  cin >> x.h;
  cout<<"Second : ";
  cin >> x.s;
}

struct Time subtract(struct Time x ,struct Time y)
{
  struct Time ans;
  ans.m = y.m-x.m;
  ans.h = y.h-x.h;
  ans.s = y.s-x.s;
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
  cout<<setfill('0')<<setw(2)<<t3.h<<":";
  cout<<setfill('0')<<t3.m<<":";
  cout<<setfill('0')<<t3.s;
  // ตัวอย่าง 02:-5:-30
}