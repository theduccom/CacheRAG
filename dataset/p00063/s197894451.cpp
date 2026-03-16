#include<iostream>
using namespace std;

int main(){
  string s;
  int ans=0;
  while(cin>>s){
    int flag=1;
    for(int i=0;i<s.size()/2;i++){
      if(s[i]!=s[s.size()-1-i]){
        flag=0;
        break;
      }
    }
    if(flag)ans++;
  }
  cout<<ans<<endl;
  return 0;
}