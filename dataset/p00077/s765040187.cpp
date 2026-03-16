#include<iostream>
#include<string>
using namespace std;

void loop(int n, char c){
  for(int i=0; i<n; i++)
    cout << c;
}


int main(){
  string s;
  while(cin >> s){
    for(int i=0; i<s.size(); i++){
      if(s[i] == '@'){
	i+=2;
	loop((s[i-1]-'0'), s[i]);
      }
      else cout << s[i];
    }
    cout << endl;
  }
  return 0;
}