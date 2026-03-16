#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

bool prime[1000001],dp[1000001];

void make_prime(){
  for(int i=0;i<1000001;i++) prime[i]=true;
  prime[0]=prime[1]=false;
  for(int i=2;i<=1000000;i++){
    if(prime[i]){
      for(int j=i*2;j<1000001;j+=i){
          prime[j]=false;
        }
    }
  }
}

int n,x;
vector<int> price;

int main(){
  make_prime();

  while(1){
    cin>>n>>x;
    if(!n && !x)break;
    while(price.size())price.pop_back();
    for(int i=0;i<1000001;i++){
      dp[i]=false;
    }
    for(int i=0;i<n;i++){
      int tmp;
      cin>>tmp;
      price.push_back(tmp);
      dp[tmp]=true;
    }

    sort(price.begin(),price.end());

    for(int i=0;i<n;i++){
      for(int j=0;j+price[i]<=x;j++){
        if(dp[j]) dp[j+price[i]]=true;
      }
    }

    int ans=0;

    for(int i=x;i>=1;i--){
      if(dp[i] && prime[i]){
        ans=i; break;
      }
    }

    if(ans==0){
      cout<<"NA"<<endl;
    }else{
      cout<<ans<<endl;
    }
  }
  return 0;
}