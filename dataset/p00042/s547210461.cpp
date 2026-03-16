#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>

#define ll (long long)
#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

using namespace std;


int main(void){
    
    /*(x,y) = (??????,??????)*/
    int max_w;
    int number;
    int answer = 0;
    int casecounter = 1;
    while(cin >> max_w,max_w)
    {
        int dp[1002][1002] = {0};
        int w[1002] = {0},v[1002] = {0};
        cin >> number;
        for(int i  =1; i<= number;i++)
            scanf("%d%*c%d",&v[i],&w[i]);
        
        for(int j = 1; j<= number;j++)
            for(int k = 0;k<=max_w;k++)
            {
              if(j == 1 && k>=w[j])
                  dp[j][k] = v[j];
              else if(k >= w[j])
                  dp[j][k] = max(dp[j-1][k],v[j]+dp[j-1][k-w[j]]);
              else
                  dp[j][k] = dp[j-1][k];
     
                
            }
        int max = 0;
        for(int i = 1;i<=max_w;i++)
        {
            if(max < dp[number][i])
            {
                answer = i;
                max = dp[number][i];
            }
            
        }
        printf("Case %d:\n",casecounter);
        printf("%d\n",dp[number][answer]);
        printf("%d\n",answer);
        casecounter++;
    }
    return 0;
    
}