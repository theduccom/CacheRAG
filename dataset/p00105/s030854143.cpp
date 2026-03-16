#include<iostream>
#include<algorithm>
using namespace std;
int cnt;
pair<string,int> t[1000];
int main(){
  for(cnt=0;cin>>t[cnt].first>>t[cnt].second;cnt++);
  sort(t,t+cnt);
  cout<<t[0].first<<endl<<t[0].second;
  for(int i=1;i<cnt;i++){
    if(t[i-1].first==t[i].first)cout<<' '<<t[i].second;
    else cout<<endl<<t[i].first<<endl<<t[i].second;
  }
  cout<<endl;
  return 0;
}