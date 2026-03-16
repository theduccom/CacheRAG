#include<string>
#include<iostream>
using namespace std;

int cups[3] = {};

int main() {
  string s;
  cups[0] = 1;
  while(cin>>s) {
    if(cups[s[0]-'A']) cups[s[2]-'A'] = 1, cups[s[0]-'A'] = 0;
    else if(cups[s[2]-'A']) cups[s[2]-'A'] = 0, cups[s[0]-'A'] = 1;
  }
  for(int i=0; i<4; ++i)
    if(cups[i]) cout<<(char)(i+'A')<<endl;
}