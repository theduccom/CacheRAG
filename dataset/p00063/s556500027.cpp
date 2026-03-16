#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int f;
  int cnt=0;
  while(cin>>s){
    f=0;
    for(int i=0;i<s.size();i++){
      if(s[i] != s[s.size()-1-i]){
	f=1;
      }
    }
    if(f==0) cnt++;
  }
  cout<<cnt<<endl;
}