#include<iostream>
using namespace std;

int main()
{
  int y, yy, i;
  bool f, ff;

  ff = false;
  while (cin>>y>>yy, y||yy) {
    if (ff) cout<<endl;
    f = true;
    if (y%4)
      y += 4-y%4;
    for(i = y; i <= yy; i += 4) {
      if( ( !(i%100) + !(i%400) ) == 1) continue;
      cout<<i<<endl;
      f = false;
    }
    if (f) cout<<"NA"<<endl;
    ff = true;
  }
  return 0;
}