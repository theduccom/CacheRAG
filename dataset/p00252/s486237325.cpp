#include <iostream>

using namespace std;

int main(){
  int x,sum = 0,p = 1;
  for(int i = 0 ; i < 3 ; i++){
    cin >> x;
    sum += x*p; p *= 2;
  }
  if(sum == 3 || sum == 4){
    cout << "Open" << endl;
  }else{
    cout << "Close" << endl;
  }
  return 0;
}