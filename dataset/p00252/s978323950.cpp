#include<iostream>
using namespace std;
int main(){
  int temp;
  int x;
  cin >> temp;
  x += temp * 100;
  cin >> temp;
  x += temp*10;
  cin >> temp;
  x += temp;

  switch(x){
  case 0:cout << "Close"<<endl;break;
  case 1:cout << "Open" << endl;break;
  case 10:
  case 100:cout << "Close"<<endl;break;
  case 110:cout<<"Open"<<endl;break;
  
  cefault:cout << "Close"<<endl;break;
  }
  
  return 0;
}