#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main(){
  string s;
  map<char,bool> vip;
  vip['A']=true;
  vip['B']=false;
  vip['C']=false;
  while(cin >> s){
    bool h = vip[s[0]];
    vip[s[0]] = vip[s[2]];
    vip[s[2]] = h;
  }
  if(vip['A'])cout << "A" << endl;
  else if(vip['B'])cout << "B" << endl;
  else cout << "C" << endl;

  return 0;
}