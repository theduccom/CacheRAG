#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n,n){
        bool flag=0;
        double result[4001]={};
        for(int i=0,str,ans=0;i<n;i++){
            double sale,num;
            cin>>str>>sale>>num;
            sale/=1000;num/=1000;
            result[str]+=sale*num;
            if(result[str]>=1){
                cout<<str<<endl;
                result[str]=-50;
                flag=1;
            }
        }
        if(!flag)cout<<"NA"<<endl;
    }
}