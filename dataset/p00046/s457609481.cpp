#include<iostream>
using namespace std;

int main(){

  double h;
  double max=0,min=10000000;

  while(cin >> h){

    if(h>max){
      max=h;
    }
    if(h<min){
      min=h;
    }
  }
  cout << max-min << endl;
  return 0;
}