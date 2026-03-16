#include<bits/stdc++.h>
using namespace std;
int main(){
  while(true){
    int n;
    cin>>n;
    if(!n) break;
    int maxl=0,maxn=0;
    for(int i=0;i<n;i++){
      int p,d1,d2;
      cin>>p>>d1>>d2;
      maxl=max(maxl,d1+d2);
      if(maxl==d1+d2) maxn=p;
    }
    cout<<maxn<<" "<<maxl<<endl;
  }
  return 0;
}

