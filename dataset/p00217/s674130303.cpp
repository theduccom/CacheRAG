#include<iostream>
using namespace std;
int n,ans,ans2,a,b,c;
int main(){
  while(cin>>n&&n){
    cin>>a>>b>>c;
    ans=a,ans2=b+c;
    for(int i=0;i<n-1;i++){
      cin>>a>>b>>c;
      if(ans2<b+c)ans=a,ans2=b+c;
    }
    cout<<ans<<' '<<ans2<<endl;
  }
  return 0;
}