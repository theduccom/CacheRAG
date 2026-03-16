#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int c=0,p=0;
  while(cin>>s){p++;
    for(int i=0;i<=s.size()/2;i++){
      if(s[i]!=s[s.size()-1-i]){c++;break;}
    }
  }cout<<p-c<<endl;
}