#include<bits/stdc++.h>
using namespace std;
int main()
{
    int weight[11],n,co[11],a=0;
    for(int i=0;i<11;i++)weight[i]=exp2(i);
    while(cin>>n){
        for(int i=0;i<11;i++)co[i]=0;
        for(int i=10;i>=0;i--){
            if(n>=weight[i]){
                co[i]=1;
                n-=weight[i];
            }
        }
        for(int i=0;i<11;i++){
            if(co[i]==1&&a==0){
                cout<<weight[i];
                a=1;
            }
            else if(co[i]==1)cout<<" "<<weight[i];
        }
        cout<<endl;
        a=0;
    }
}