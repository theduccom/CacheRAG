#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#define _USE_MATH_DEFINES

using namespace std;
int main(){
  int l,a;
  string sl,sa;
  double x,y,aa;
  x=y=aa=0;
  while(true){
  getline(cin,sl,',');
  getline(cin,sa,'\n');
  l = atoi(sl.c_str());
  a = atoi(sa.c_str());
  if (!l&&!a)break;
  x += sin(aa*(2*M_PI)/360)*l;
  y += cos(aa*(2*M_PI)/360)*l;
  aa += a;
  }
  cout << (int)x << endl << (int)y << endl;
}