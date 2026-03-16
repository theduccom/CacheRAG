#include<iostream>
#include<math.h>
using namespace std;
int main(){
  double v;
  while(cin >>v){
    double n=1;
    while(sqrt((n*5-5)/4.9)*9.8<v) n++;
    cout << n << endl;
  } 

  return 0;
}