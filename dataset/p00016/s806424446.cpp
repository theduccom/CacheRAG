#include<iostream>
#include<cmath>
using namespace std;
int main() {
  double x=0;
  double y=0;
  int d;
  int a=90;
  int _a;
  char c;
  while(true){
    cin>>d>>c>>_a;
    if(d==0 && _a==0)
      break;
    x+=d*cos(a*M_PI/180);
    y+=d*sin(a*M_PI/180);
    a-=_a;
  }
  cout<<(int)x<<endl;
  cout<<(int)y<<endl;
  return 0;
}

