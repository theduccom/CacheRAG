#include<bits/stdc++.h>
using namespace std;
main(){
  int a[10005],n,aice;
  while(1){
    cin>>n;
    if(n==0)break;
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
      cin>>aice;
      a[aice]++;
    }
    for(int i=0;i<10;i++){
      if(a[i]==0){
	cout<<'-'<<endl;
      }
      else{
	for(int j=0;j<a[i];j++){
	  cout<<'*';
	}
	cout<<endl;
      }
    }
  }
}