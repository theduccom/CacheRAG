#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  while(cin >>s){
    int ans=0,pro=2000,now;
    for(int i=0; i<s.size(); i++){
      if(s[i] == 'I') now = 1;
      if(s[i] == 'V') now = 5;
      if(s[i] == 'X') now = 10;
      if(s[i] == 'L') now = 50;
      if(s[i] == 'C') now = 100;
      if(s[i] == 'D') now = 500;
      if(s[i] == 'M') now = 1000;
      if(pro>=now){ans+=now;pro = now;}
      else{ans+=(now-pro*2);pro = 2000;}
    }
    cout <<ans<<endl;
  }
  return 0;
}