//Roman Figure
#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  while(cin>>s){
    int ans=0, tmp;
    int p, pn;
    vector<int> v;
    for(int i=s.length()-1; i>=0; i--){
      if(s[i]=='I')tmp=1;
      if(s[i]=='V')tmp=5;
      if(s[i]=='X')tmp=10;
      if(s[i]=='L')tmp=50;
      if(s[i]=='C')tmp=100;
      if(s[i]=='D')tmp=500;
      if(s[i]=='M')tmp=1000;

      if(i==s.length()-1){
        p=s.length()-1;
        pn=tmp;
      }

      if(pn!=tmp){
        int tmp2=pn*(p-i);
        p=i;
        pn=tmp;
        if(ans<tmp2)ans+=tmp2;
        else ans-=tmp2;
      }

      if(i==0){
        int tmp2=pn*(p+1);
        if(ans<tmp2)ans+=tmp2;
        else ans-=tmp2;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}