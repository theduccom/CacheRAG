#include<iostream>
#include<string>
using namespace std;
int main(){
  int h,at=0,bt=0,ot=0,abt=0;
  char c;
  string b;
  while(cin>>h>>c>>b){
    if(b=="A") at++;
    if(b=="B") bt++;
    if(b=="O") ot++;
    if(b=="AB") abt++;
  }
    cout << at << endl << bt << endl << abt << endl << ot << endl;
  return 0;
}   