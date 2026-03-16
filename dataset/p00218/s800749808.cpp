#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;if(!n)return 0;
        int pm[10000],pe[10000],pj[10000],sc[10000]={0};
        for(int i=0;i<n;++i){
            cin>>pm[i]>>pe[i]>>pj[i];
        	if((pm[i]+pe[i]+pj[i])/3>=50&(pm[i]>=80|pe[i]>=80))
                sc[i]=1;
            if((pm[i]+pe[i]+pj[i])/3>=70)
                sc[i]=1;
            if((pm[i]+pe[i]+pj[i])/3>=80)
                sc[i]=2;
            if((pm[i]+pe[i])/2>=90)
                sc[i]=2;
            if(pm[i]==100|pe[i]==100|pj[i]==100)
                sc[i]=2;
            if(!sc[i])cout<<'C'<<endl;
            if(sc[i]==1)cout<<'B'<<endl;
            if(sc[i]==2)cout<<'A'<<endl;
        }
    }
}