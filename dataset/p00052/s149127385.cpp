#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fac=0,ans=0,now,num;
    while(cin>>n&&n!=0){
        for(int i=1;;i++){
            num=5*i;
            if(num>n)break;
            for(int j=1;num%5==0;j++){
                num/=5;
                now=j;
            }
                ans+=now;
        }
        cout<<ans<<endl;
        ans=0;
    }
}