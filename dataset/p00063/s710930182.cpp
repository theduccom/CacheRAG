#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  int ans = 0;
  while(getline(cin,str)){
    int len = str.size();
    string tmp="";
    for(int i=len-1;i>=0;i--){
      tmp += str[i];
    }
    if(str == tmp) ans++;
  }
  cout << ans << endl;
}