#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=-1){
        int sum=3130,num[3]={125,140,160};
        for(int i=0,j=n-10;i<3;i++,j-=10){
            if(j>10&&i!=2)sum-=num[i]*10;
            else if(j>0)sum-=num[i]*j;
        }
        cout<<sum<<endl;
    }
}