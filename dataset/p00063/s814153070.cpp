//Palindrome
#include<bits/stdc++.h>
using namespace std;

bool solve(string s){
  for(int i=0; i<s.length()/2; i++){
    if(s[i]!=s[s.length()-i-1])return false;
  }
  return true;
}

int main(){
  string s;
  int n=0;
  while(cin>>s){
    if(solve(s))n++;
  }
  cout<<n<<endl;
  return 0;
}