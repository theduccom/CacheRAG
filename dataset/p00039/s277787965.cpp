#include<iostream>
using namespace std;
int main(){
  string s;
  while(cin >>s){
    int ans = 0,t = 0;
    for(int i=0; i<s.size(); i++){
      switch(s[i]){
      case 'I':
	t = 1;
	ans++;
	break;
      case 'V':
	if(t == 1) ans-=2;
	t = 5;
	ans+=5;
	break;
      case 'X':
	if(t == 1) ans-=2;
	t = 10;
	ans+=10;
	break;
      case 'L':
	if(t == 10) ans-=20;
	t = 50;
	ans+=50;
	break;
      case 'C':
	if(t == 10) ans-=20;
	t = 100;
	ans+=100;
	break;
      case 'D':
	if(t == 100) ans-=200;
	t = 500;
	ans+=500;
	break;
      case 'M':
	if(t == 100) ans-=200;
	t = 1000;
	ans+=1000;
	break;
      }
    }
    cout <<ans<<endl;
  }
  return 0;
}