//The Number of Island
#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > mp;

int dir[4][2]={{-1,0}, {0,1}, {1,0}, {0,-1}};

vector<int> mv(string s){
  vector<int> tmp;
  for(int i=0; i<s.length(); i++){
    tmp.push_back(s[i]);
  }
  return tmp;
}

void solve(int i, int j){
  if(i<0 || 12<=i || j<0 || 12<=j)return;
  if(mp[i][j]=='0')return;
  mp[i][j]='0';
  for(int k=0; k<4; k++)
    solve(i+dir[k][0], j+dir[k][1]);
}

int main(){
  string s;
  while(cin>>s){
    mp.clear();
    if(s==""){continue;}
    mp.push_back(mv(s));
    for(int i=0; i<11; i++){
      cin>>s;
      mp.push_back(mv(s));
    }

    int ans=0;
    for(int i=0; i<12; i++){
      for(int j=0; j<12; j++){
        if(mp[i][j]=='1'){
          ans++;
          solve(i, j);
        }
      }
    }
    cout<<ans<<endl;
  }
}