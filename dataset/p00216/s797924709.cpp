#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=-1){
        int sum=3130,num[3]={125,140,160};
        for(int i=0;i<3;i++){
            n-=10;
            if(n>10&&i!=2)sum-=num[i]*10;
            else if(n>0)sum-=num[i]*n;
        }
        cout<<sum<<endl;
    }
}