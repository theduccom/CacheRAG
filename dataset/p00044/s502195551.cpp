#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[50500],n,ma,anslow=0,anshigh=0;
    ma=sqrt(50500);
    for(int i=1;i<50500;i++)num[i]=0;
    for(int i=2;i<ma;i++){
        if(num[i]==0){
            for(int j=2;j*i<50500;j++)num[j*i]=1;
        }
    }
    while(cin>>n){
        for(int i=1;anslow==0||anshigh==0;i++){
            if(num[n-i]==0&&anslow==0)anslow=n-i;
            if(num[n+i]==0&&anshigh==0)anshigh=n+i;
        }
        cout<<anslow<<" "<<anshigh<<endl;
        anshigh=0;anslow=0;
    }
}