#include<iostream>
using namespace std;

int main(){
  int a=1;
  int b=1;
  for(int i=0; i=81; i++){
    cout << a << "x" << b << "=" << a*b << endl;
    if(a>=9 && b>=9)
      break;
    b++;
    if(b>=10){
      b=1;
      a++;
    }
  }
    
  return 0;
}

