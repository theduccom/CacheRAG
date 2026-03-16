#include <bits/stdc++.h>
using namespace std;
int main(){
  char a[200];
  int n,k,l,i;
  cin>>n;
  while(n--){
    string s1,s2;
    cin>>s1>>s2;
    for(i=0;i<200;i++)a[i]='0';
    for(k=0,i=s2.size()-1;i>=0;i--)a[k++]=s2[i];
    for(l=0,i=s1.size()-1;i>=0;i--,l++){
      a[l]+=s1[i]-'0';
      if(a[l]>'9'){a[l+1]++;a[l]-=10;
        if(!i)l++;
      }
    }
    if(k>80||l>80)cout<<"overflow";
    else if(l<k)for(i=k-1;i>=0;i--)cout<<a[i];
    else for(i=l-1;i>=0;i--)cout<<a[i];
    cout<<endl;
  }
}