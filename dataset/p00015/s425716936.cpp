#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
string a,b;
long long int s,cop,copp,last,n;
long long int latte[1000],cafe[1000],all[1000],ans[1000];
int main(){
    int cou=0;
    cin>>n;
    for(int l=0;l<n;l++){
        cou=0;
        fill(latte,latte+1000,0);
        fill(cafe,cafe+1000,0);
        fill(all,all+1000,0);
        fill(ans,ans+1000,0);
        cin>>a>>b;
        if(a.size()>b.size()){
            s=a.size();
            cop=a.size(),copp=b.size(),last=s;
        }
        else {
            s=b.size();
            cop=a.size(),copp=b.size(),last=s;
        }
        if(s>80){
            cout<<"overflow"<<endl;
            continue;
        }
        for(int i=0;i<a.size();i++){
            cop--;
            if(a[i]=='0')latte[cop]=0;
            if(a[i]=='1')latte[cop]=1;
            if(a[i]=='2')latte[cop]=2;
            if(a[i]=='3')latte[cop]=3;
            if(a[i]=='4')latte[cop]=4;
            if(a[i]=='5')latte[cop]=5;
            if(a[i]=='6')latte[cop]=6;
            if(a[i]=='7')latte[cop]=7;
            if(a[i]=='8')latte[cop]=8;
            if(a[i]=='9')latte[cop]=9;
            }
        for(int i=0;i<b.size();i++){
            copp--;
            if(b[i]=='0')cafe[copp]=0;
            if(b[i]=='1')cafe[copp]=1;
            if(b[i]=='2')cafe[copp]=2;
            if(b[i]=='3')cafe[copp]=3;
            if(b[i]=='4')cafe[copp]=4;
            if(b[i]=='5')cafe[copp]=5;
            if(b[i]=='6')cafe[copp]=6;
            if(b[i]=='7')cafe[copp]=7;
            if(b[i]=='8')cafe[copp]=8;
            if(b[i]=='9')cafe[copp]=9;
            }
         for(int i=0;i<=s;i++){
            all[i]+=latte[i]+cafe[i];
            if(all[i]>9){
                all[i]-=10;
                all[i+1]+=1;
            }
         }
         /*for(int i=s-1;i>-1;i--){
            if(all[last]!=0)cout<<all[last];
            cout<<all[i];
            all[last]=0;
         }*/
         for(int i=s-1;i>-1;i--){
            if(all[last]!=0){
                ans[last]=all[last];
                cou++;
                all[last]=0;
            }
            ans[i]=all[i];
            cou++;
         }
         if(cou>80)cout<<"overflow";
         else for(int i=s-1;i>-1;i--){
            if(ans[last]!=0)cout<<ans[last];
            cout<<ans[i];
            ans[last]=0;
         }
         cout<<endl;
    }
}
//99999999999999999999999999999999999999999999999999999999999999999999999999999999