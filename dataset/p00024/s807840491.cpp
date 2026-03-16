#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
const double k =9.8*9.8/4.9;
double vmax;
bool judge(int n)
{
    if(k*(5*n-5)>=vmax*vmax)
        return true;
    else
        return false;
}

int main()
{
    while(cin>>vmax)
    {
        int l=0,r=10000;
        int ans;
        while(r-l>=0)
        {
            int m=(l+r)/2;
            if(judge(m))
            {
                ans=m;
                r=m-1;
            }
            else
                l=m+1;
        }
        printf("%d\n",ans);
    }
    return 0;
}