#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <cstdlib>
#include <stdio.h>
#define INF 100000000
#define INFLL (long long)1e14
#define Loops(i, n) for(int i = 0; i < (int)n; i++)
#define Loops1(i, n) for(int i = 1; i <= (int)n; i++)
int dp[2000][2000];
int w[2000];
int v[2000];
int N;
int W;
int count=1;
int main(void){
    while(1){
        std::cin>>W;
        if(W==0){
            break;
        }
        std::cin>>N;
        Loops(i,N){
            int vi,wi;
            scanf("%d,%d",&vi,&wi);
            v[i]=vi;
            w[i]=wi;
//          std::cin>>w[i]>>v[i];
        }
        Loops(i,1000){
            Loops(j,1000){
                dp[i][j]=0;
            }
        }
        Loops(i,N){
            Loops(j,W+1){
                if(j-w[i]>=0){
                    dp[i+1][j]=std::max(dp[i][j],dp[i][j-w[i]]+v[i]);
                }else {
                    dp[i+1][j]=dp[i][j];                
                }
            }
        }
        int kati=0,omosa=0;
        Loops(i,W+1){
            if(kati<dp[N][i]){
                kati=dp[N][i];
                omosa=i;
            }
        }
        printf("Case %d:\n",count);
        std::cout<<kati<<std::endl;
        std::cout<<omosa<<std::endl;
        count++;
/*  Loops(i,N+1){
        Loops(j,W+1){
            std::cout<<dp[i][j]<<" ";
        }
        std::cout<<std::endl;
    }*/
 
    }
    return 0;
}