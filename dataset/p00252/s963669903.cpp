#include<iostream>
using namespace std;
int main(){
  int a,b,c,plus;
  while(cin >> a >> b >> c){
    plus=0;
    if(a>0 && b>0){
      plus++;
    }
    else if(c>0){
      plus++;
    }
    if(plus==0){
      cout << "Close" << endl;
    }
    else{
      cout << "Open" << endl;
    }
  }
}