#include<ios>
#include<iostream>
using namespace std;
int n,a[11][11];
main()
{
    while(cin>>n,n)
    {
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)sum+=a[i][j];
            a[i][n]=sum;
        }
        for(int j=0;j<=n;j++)
        {
            int sum=0;
            for(int i=0;i<n;i++)sum+=a[i][j];
            a[n][j]=sum;
        }
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)printf("%5d",a[i][j]);
            puts("");
        }
    }
}
