#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void){
  string s;
  getline(cin,s);
  for(int i = 0 ; i < s.size() ; i ++){
    if('a' <= s[i] && s[i] <= 'z')
      s[i] = s[i] - 'a' + 'A';
  }
  cout<<s<<endl;
}