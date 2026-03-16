#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  while(1){
    int h,w;
    cin>>h>>w;
    if(!h)break;
    vector<string> t(h);
    REP(i,h)cin>>t[i];
    string s=">v<^.";
    int di[]={0,1,0,-1,0};
    int dj[]={1,0,-1,0,0};
    set<pair<int,int>> st;
    int i=0,j=0;
    bool loop = false;
    while(t[i][j] != '.') {
      if (st.find(make_pair(i,j))!=end(st)) {
        loop=true;
        break;
      }
      st.insert(make_pair(i,j));
      int id=find(begin(s),end(s),t[i][j])-begin(s);
      tie(i,j)=make_pair(i+di[id],j+dj[id]);
    }
    if(loop)
      cout << "LOOP" << endl;
    else
      cout << j << ' '<<i<<endl;
  }
  return 0;
}