#include<bits/stdc++.h>
using namespace std;
int a,b,c,ans,ans2;

int main(){
  while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
    if(a*a+b*b==c*c)ans++;
    if(a==b)ans2++;
  }
  cout<<ans<<endl<<ans2<<endl;
  return 0;
}