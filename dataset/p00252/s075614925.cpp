#include<iostream>
using namespace std;

int main(){
  int a[3];
  int cou=0;
  for(int i=0;i<3;i++){
    cin >> a[i];
    if(a[i] == 1){
      cou++;
    }
  }
  if(a[2] == 1 || cou == 2){
    cout << "Open" << endl;
  }
  else {
    cout << "Close" << endl;
  }
}