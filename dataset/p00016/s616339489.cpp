#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;


int main(){
  int n;
  int a,b;
  char c;

  double x=0.0, y=0.0;
  int angle=90;

  // cout << M_PI << endl;
  
  while(cin >> a >> c >> b){
    // cout << "---" << endl;
    // cout << a << endl;
    // cout << b << endl;
    if(a==0 && b==0){
      break;
    }
    x += a*cos(angle*M_PI/180.0);
    y += a*sin(angle*M_PI/180.0);
    angle -= b;
    
    if(angle <= -180){
      angle += 360;
    }
    if(angle >= 180){
      angle -= 360;
    }
  }

  cout << (int)x << endl;
  cout << (int)y << endl;
  return 0;
}