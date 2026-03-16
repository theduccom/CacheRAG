#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int n,x;
int v[30];
//vector<int> prime;
bool is_prime[1000001];

void sieve(int n){
  //  int p = 0;
  for(int i = 0;i<=n;i++){
    is_prime[i] = true;
  }
  is_prime[0] = is_prime[1] = false;
  for(int i = 2;i<=n;i++){
    if(is_prime[i]){
      for(int j = 2*i;j<=n;j+=i)
	is_prime[j] = false;
    }
  }
}
  
  

int main(){
  sieve(1000000);
  while(cin>>n>>x){
    if(n == 0 && x == 0)
      return 0;
    bool can[1000001];
    for(int i = 0;i<=x;i++)
      can[i] = false;
    for(int i = 0;i<n;i++){
      cin>>v[i];
    }
    sort(v,v+n);
    for(int i = 0;i<n;i++){
      can[v[i]]=true;
      for(int j = 0;v[i]+j<=x;j++){
	if(can[j])
	  can[j+v[i]] = true;
      }
    }
    int ans = 0;
    for(int i = 0;i<=x;i++){
      if(can[i] && is_prime[i])
	ans = i;
    }
    if(ans != 0)
      cout<<ans<<endl;
    else
      cout<<"NA"<<endl;
  }


  return 0;
}