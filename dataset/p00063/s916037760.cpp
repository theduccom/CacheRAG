#include<iostream>
using namespace std;

int main(void){
  int cnt = 0;
  string s;
  while(cin>>s){
    bool ok = true;
    for(int i = 0 ; i < s.size() / 2 ; i ++){
      //cout<<s[i]<<" "<<s[s.size()-i-1]<<endl;
      if(s[i] != s[s.size() - i-1])ok = false;
    }
    cnt += (ok?1:0);
  }
  cout<<cnt<<endl;
  
}