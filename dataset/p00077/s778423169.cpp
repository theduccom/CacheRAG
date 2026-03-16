#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int len=0;
  while(cin >> s){
    string ans;
    len=s.length();
    for(int i=0;i<len;i++){
      if(s[i]=='@'){
	for(int j=0;j<s[i+1]-'0';j++){
	  ans+=s[i+2];
	}
	i+=2;
      }else{
	ans+=s[i];
      }
    }
    cout << ans << endl;
  }
}