#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,m;
  while(cin>>n>>m,n){
    int veg[n];
    for(int i=0;i<n;i++)cin>>veg[i];
    sort(veg,veg+n,greater<int>());
    int res=0;
    for(int i=0;i<n;i++){
      if((i+1)%m==0)continue;
      res+=veg[i];
    }
    cout << res << endl;
  }
  return 0;
}