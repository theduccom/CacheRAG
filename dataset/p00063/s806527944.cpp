//22
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int ans=0;
  for(string s;cin>>s;){
    ans+=s==string(s.rbegin(),s.rend());
  }
  cout<<ans<<endl;
  return 0;
}