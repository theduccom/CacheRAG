#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  string s;
  while(cin >> s){
    for(int i=0;i<s.size();i++){
      if(s[i]!='@')cout << s[i];
      else{
        n=s[i+1]-'0';
        for(int j=0;j<n;j++){
          cout << s[i+2];
        }
        i+=2;
      }
    }
    cout << endl;
  }
  return 0;
}

