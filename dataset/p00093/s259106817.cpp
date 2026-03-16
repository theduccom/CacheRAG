#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fiyear,finyear,co=0,now=0;
    while(cin>>fiyear>>finyear&&fiyear!=0&&finyear!=0){
        if(now!=0)cout<<endl;
        else now=1;
        for(int i=fiyear;i<=finyear;i++){
            if(i%4==0){
                co=1;
                if(i%100!=0||i%400==0)cout<<i<<endl;
            }
        }
        if(co==0)cout<<"NA"<<endl;
        co=0;
    }
}