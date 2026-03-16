#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
long long sales[4010];
#define foreach(r,p,it) for(r::iterator it=p.begin();it!=p.end();++it)

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        vector<int> shains;
        shains.clear();
    
        memset(sales,0,sizeof(sales));
        long long num,tanka,kazu;

        for(int i=0;i<n;i++)
        {
            cin>>num>>tanka>>kazu;
            sales[num] += tanka*kazu;
            int f=0;
            for(int j=0;j<shains.size();j++)
            {
                if(shains[j] == num){f=1;break;}
            }
            if(f==0) shains.push_back(num);
        }
        int na = 0;
        for(int i=0;i<shains.size();i++)
        {
            //cout <<"NUMBER"<<*it <<endl;
            if(sales[shains[i]] >= 1000000){cout<<shains[i]<<endl;na=1;}
        }
        if(na==0)cout<< "NA"<<endl;
    }
    return 0;
}