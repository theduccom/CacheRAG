#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  int n;
  while(1){
    cin>>n;
    if(n==0){
      break;
    }
    int p,d,d2;
    int mxl=0,mxd=0;
    for(int i=0;i<n;i++){
      cin>>p>>d>>d2;
      if(mxl<d+d2){
	mxl=d+d2;
	mxd=p;
      }
    }
    cout<<mxd<<' '<<mxl<<endl;
  }
  return(0);
}

