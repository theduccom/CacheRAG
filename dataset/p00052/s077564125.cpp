#include<bits/stdc++.h>
using namespace std;
int main(){
  int ans;
  int n;
  while(1){
    cin>>n;
    if(n == 0) break;
    ans=0;
    while(n){
      ans += n/=5;
    }
    cout<<ans<<endl;
  }
}
	 