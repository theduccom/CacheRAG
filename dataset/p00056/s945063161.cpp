//Goldbach's Conjecture
#include<bits/stdc++.h>
using namespace std;

vector<int> p;
int ans[50001];

void solve(){
  int ret=0;
  for(int i=0; i<p.size(); i++)
    for(int j=i; j<p.size(); j++){
      if(p[i]+p[j]>50000)break;
      ans[p[i]+p[j]]++;
    }
}

int main(){
  p.push_back(2);
  for(int i=3; i<50000; i+=2){
    bool flag=true;
    for(int j=0; j<p.size(); j++)
      if(i%p[j]==0){flag=false; break;}
    if(flag){p.push_back(i);}
  }
  solve();

  int n;
  while(true){
    cin>>n;
    if(n==0)break;
    cout<<ans[n]<<endl;
  }
  return 0;
}