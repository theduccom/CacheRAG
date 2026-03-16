#include<iostream>
using namespace std;
int main(){
  string s;
  while(cin >>s){
    int ans = 0,a,b=100000;
    for(int i=0; i<s.size(); i++){
      if(s[i] == 'I') a = 1;
      if(s[i] == 'V') a = 5;
      if(s[i] == 'X') a = 10;
      if(s[i] == 'L') a = 50;
      if(s[i] == 'C') a = 100;
      if(s[i] == 'D') a = 500;
      if(s[i] == 'M') a = 1000;
      ans+=a;
      if(b<a) ans-=b*2;
      b = a;
    }
    cout <<ans<<endl;
  }
  return 0;
}