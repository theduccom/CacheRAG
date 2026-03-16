#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <map>
using namespace std;
typedef long long LL;
static const double EPS = 1e-9;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

int main(void){
  map<string, set<int> > sakuin;
  string word;
  int page;
  map<string, set<int> >::iterator it;
  set<int>::iterator it2;
  while(cin>>word){
    cin>>page;
    if((it=sakuin.find(word))!=sakuin.end()){
      (*it).second.insert(page);
    }else{
      set<int> tmp;
      tmp.insert(page);
      sakuin[word]=tmp;
    }
  }
  for(it=sakuin.begin();it!=sakuin.end();it++){
    cout<<(*it).first<<endl;
    for(it2=(*it).second.begin();it2!=(*it).second.end();it2++){
      if(it2!=(*it).second.begin()){
        printf(" ");
      }
      printf("%d",(*it2));
    }
    cout<<endl;
  }
  return 0;
}