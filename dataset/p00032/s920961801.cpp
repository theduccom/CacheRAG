#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
  string d1,d2,d3;
  int a1,a2,a3;
  int c1=0,c2=0;
  while(getline(cin,d1,',')){
    a1 = atoi(d1.c_str());
    getline(cin,d2,',');
    a2 = atoi(d2.c_str());
    getline(cin,d3,'\n');
    a3 = atoi(d3.c_str());
    if (a1*a1+a2*a2==a3*a3)
      c1++;
    if (a1==a2)
      c2++;
  }
  cout <<c1<<endl<<c2<<endl;
  return 0;
}