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
  string s,key="apple",ans="peach";
  while(getline(cin,s)){
    for(int i=0;i<s.size();i++){
      if(s[i]=='a'){
        bool f=true;
        for(int j=0;j<5;j++){
          if(s[i+j]!=key[j])f=false;
        }
        if(f)for(int j=0;j<5;j++){
          s[i+j]=ans[j];
        }
        continue;
      }
      if(s[i]=='p'){
        bool f=true;
        for(int j=0;j<5;j++)if(s[i+j]!=ans[j])f=false;
        if(f)for(int j=0;j<5;j++)s[i+j]=key[j];
        continue;
      }
    }
    cout<<s<<endl;
  }
}