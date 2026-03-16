#include<iostream>
#include<cmath>
using namespace std;

int main(){
   double n,y;
   while(cin >> n){
      y=pow(n/9.8,2)*4.9;
      if(y/5>(int)y/5) 
      cout << (int)y/5+2 << endl;
      else cout << (int)y/5+1 << endl;
   }
}