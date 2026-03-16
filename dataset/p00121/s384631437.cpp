#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

const int INF = 1000000000;

int main() {
  string str="01234567";
  map<string, int> m;
  do{
    m.insert(make_pair(str,INF));
  }while(next_permutation(begin(str),end(str)));
  m["01234567"] = 0;
  queue<string> q;
  q.push("01234567");
  while(!q.empty()) {
    string s = q.front();
    q.pop();
    int d[4] = {1,-1,4,-4};
    for(int i = 0; i < 8; ++i) {
      if (s[i] == '0') {
        for(int j = 0; j < 4; ++j) {
          int ni = i + d[j];
          if(ni < 0 || ni >= 8) continue;
          if(i == 3 && ni == 4 || i == 4 && ni == 3)continue;
          string ns = s;
          swap(ns[ni],ns[i]);
          if(m[ns] > m[s] + 1) {
            m[ns] = m[s] + 1;
            q.push(ns);
          }
        }
      }
    }
  }
  while(true){
    int ary[8];
    if(scanf("%d",&ary[0]) == EOF) break;
    string s="";
    s+=ary[0]+'0';
    for(int i=1;i<8;++i){
      scanf("%d",&ary[i]);
      s+=ary[i]+'0';
    }
    printf("%d\n",m[s]);
  }
  return 0;
}