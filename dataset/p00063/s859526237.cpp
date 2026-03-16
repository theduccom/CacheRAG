#include<iostream>
#include<string>
using namespace std;
int main(){
  int ans = 0;
  string s;
  while(cin >>s){
    for(int i=0; i<s.size(); i++){
      if(s[i]!=s[s.size()-i-1]) break;
      if(i == s.size()-1) ans++;
    }
  }
  cout <<ans<<endl;
  return 0;
}