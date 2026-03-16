#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <map>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,b) FOR(i,0,b)
#define PB push_back
#define MP make_pair
int main(){
  string s;
  while(getline(cin,s)){
    for(int i=0;i<26;i++){
      if(s.find("the")!=string::npos)break;
      if(s.find("that")!=string::npos)break;
      if(s.find("this")!=string::npos)break;
      for(int i=0;i<s.size();i++){
        if(!isalpha(s[i]))continue;
        s[i]++;
        if(s[i]>'z')s[i]-=26;
      }
    }
    cout<<s<<endl;
  }
}