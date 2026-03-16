#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  while(cin >>s){
    bool f = false;
    int x = 0;
    for(int i=0; i<s.size(); i++){
      if(s[i] == '@'){f = true;}
      else if(f && x == 0){x = s[i]-'0';}
      else if(f){
	for(int j=0; j<x; j++){cout <<s[i];}
	f = false;
	x = 0;
      }
      else cout <<s[i];
    }
    cout <<endl;
  }
  return 0;
}