//Sale Result
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> order;//入力された順番
map<string, ll> mp;

int main(){
  int n;
  while(cin>>n){
    if(n==0)break;
    vector<string>::iterator it;
    order.clear();
    mp.clear();
    for(int i=0; i<n; i++){
      string p;
      ll u, a;
      cin>>p>>u>>a;
      it=find(order.begin(), order.end(), p);
      if(it==order.end()){
        order.push_back(p);
        mp.insert(make_pair<string, ll>(p, 0));
      }
      mp[p]+=u*a;
    }
    bool flag=true;
    for(it=order.begin(); it!=order.end(); it++){
      if(mp[*it]>=1000000){
        cout<<*it<<endl;
        flag=false;
      }
    }
    if(flag)cout<<"NA"<<endl;
  }
  return 0;
}