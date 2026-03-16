#include<iostream>
using namespace std;

bool isLeap(int year){
  return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main(){
  int fr, to;
  bool line = false;
  while(true){
    cin >> fr >> to;
    if(fr == 0 && to == 0) break;
    
    if(!line) line = true;
    else cout << endl;
    
    bool NA = true;
    
    for(int i=fr;i<=to;i++){
      if(isLeap(i)) { cout << i << endl; NA = false; }
    }
    
    if(NA) cout << "NA" << endl;
  }
  return 0;
}