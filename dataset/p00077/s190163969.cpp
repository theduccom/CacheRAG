#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  int n;

  while(cin>>s){
    for(int i=0; i<(int)s.size(); i++){
      if(s[i]!='@')cout << s[i];
      else{
	i++;
	n = s[i]-'0';
	i++;
	for(int j=0; j<n; j++)cout<<s[i];
      }
    }
    cout << endl;
  }

  return 0;
}