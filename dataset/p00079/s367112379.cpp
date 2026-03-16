#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <strstream>
using namespace std;

int main (){
  double s,x1,y1,x2,y2,x3,y3,a,b,c,z;
  char ch;
  s=0;
  cin>>x1>>ch>>y1;
  cin>>x2>>ch>>y2;
  a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  while(cin>>x3>>ch>>y3){
    b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    z=(a+b+c)/2;
    s+=sqrt(z*(z-a)*(z-b)*(z-c));
    x2=x3;
    y2=y3;
    a=b;
  }
  cout<<s<<endl;
  
  return 0;
}