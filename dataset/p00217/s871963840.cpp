#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n!=0){
    int a,b,c;
    int mx=0,mn=0;
    for(int i=0;i<n;i++){
      cin>>a>>b>>c;
      mx=max(mx,c+b);
      if(mx==c+b){
	mn=a;
      }
    }
    cout<<mn<<' '<<mx<<endl;
    cin>>n;
  }
  return 0;
}

