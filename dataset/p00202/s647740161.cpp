#include <iostream>
using namespace std;
bool dp[5000000];
int menu[30];
int main()
{
    while(1)
    {
        int n,x;
        cin>>n>>x;if(!n)return 0;
        for(int i=0;i<n;++i){
            cin>>menu[i];
        }
        fill(dp,dp+5000000,false);
        dp[0]=true;
        for(int i=0;i<=x;++i){
            if(dp[i]){
                for(int j=0;j<n;++j){
                    dp[i+menu[j]]=true;
                }
            }
        }
        int m=0;
        for(int i=x;i>=0;--i){
            bool flag=true;
            if(dp[i]){
                for(int j=2;j*j<=i;++j){
                    if(!(i%j)){
                        flag=false;
                    }
                }
                if(flag){
                    m=i;
                    break;
                }
            }
        }
        if(m)cout<<m<<endl;
        else cout<<"NA"<<endl;
    }
}