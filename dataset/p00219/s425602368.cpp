#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,c,a[11];
  while(1){
    memset(a,0,sizeof(a));
    cin>>n;
    if(n==0) break;
    for(int i=0;i<n;i++){
      cin>>c;
      a[c]++;
    }
    for(int i=0;i<10;i++){
      if(a[i]!=0){
	for(int j=0;j<a[i];j++){
	  cout<<'*';
	}
      }else{
	cout<<'-';
      }
      cout<<endl;
    }
  }
  return(0);
}

