#include<iostream>
using namespace std;

int main(){
  bool b[3];
  for(int i=0;i<3;i++)cin >> b[i];
  if(b[2])cout << "Open\n";
  else if(!b[0])cout << "Close\n";
  else if(b[1])cout << "Open\n";
  else cout << "Close\n";
}