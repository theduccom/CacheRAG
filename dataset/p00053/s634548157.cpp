//Sum of Prime Numbers
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> p;

int main(){
  p.push_back(2);
  for(int i=3; p.size()!=10000; i+=2){
    bool flag=true;
    for(int j=0; j<p.size(); j++){
      if(i%p[j]==0){
        flag=false;
        break;
      }
    }
    if(flag)p.push_back(i);
  }

  int n;
  while(true){
    ll ans=0;
    cin>>n;
    if(n==0)break;
    for(int i=0; i<n; i++){
      ans+=p[i];
    }
    cout<<ans<<endl;
  }
  return 0;
}