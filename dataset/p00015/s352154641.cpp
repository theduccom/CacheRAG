#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k,p;
  string s1,s2,ans;
  cin>>n;
  while(n--){
    ans.clear();
    p=0;
    cin>>s1;
    cin>>s2;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    k=max(s1.size(),s2.size());
    for(int i=s1.size();i<k;i++)s1+='0';
    for(int i=s2.size();i<k;i++)s2+='0';
    for(int i=0;i<k;i++){
      int sum=s1[i]-'0'+s2[i]-'0'+p;
      ans+=(sum%10)+'0';
      p=sum/10;
    }
    if(p)ans+=p+'0';
    reverse(ans.begin(),ans.end());
    if(ans.size()<=80)cout<<ans<<endl;
    else cout<<"overflow"<<endl;
  }
  return 0;
}