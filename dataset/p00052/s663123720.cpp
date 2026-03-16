#include<iostream>
using namespace std;
int main(){
  long long int n;
  while(cin >>n,n){
    int ans = 0;
    for(long long int i=5; i<=n; i*=5) for(long long int j=i; j<=n; j+=i) ans++;
    cout <<ans<<endl;
  }
  return 0;
}