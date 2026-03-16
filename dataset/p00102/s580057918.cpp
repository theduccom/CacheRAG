#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int nums[12][12];
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0){break;}
        memset(nums,0,sizeof(nums));
        rep(j,n)rep(i,n)
        {
            cin>>nums[i][j];
            nums[i][n] += nums[i][j];
            nums[n][j] += nums[i][j];
        }
        rep(i,n){nums[n][n] += nums[i][n];}
        
        rep(j,n+1)
        {
            rep(i,n+1)
            {
                printf("%5d",nums[i][j]);
            }
            cout << endl;
        }

    }
    return 0;
}