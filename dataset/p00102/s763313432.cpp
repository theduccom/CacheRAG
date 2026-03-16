#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;if(!n)return 0;
        int t[11][11]={{0}};
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cin>>t[i][j];
            }
        }
        for(int i=0;i<n;++i){
            int sum=0;
            for(int j=0;j<=n;++j){
                if(j!=n){
                    sum+=t[i][j];
                    t[n][n]+=t[i][j];
                }
                if(j==n){
                    t[i][j]=sum;
                }
            }
        }
        for(int j=0;j<n;++j){
            int sum=0;
            for(int i=0;i<=n;++i){
                if(i!=n){
                    sum+=t[i][j];
                }
                if(i==n){
                    t[i][j]=sum;
                }
            }
        }
        for(int i=0;i<=n;++i){
            for(int j=0;j<=n;++j){
                printf("%5d",t[i][j]);
            }
            cout<<endl;
        }
    }
}