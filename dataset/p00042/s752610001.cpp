#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<iostream>
#include<string>

using namespace std;


void Solution()
{
    int n;
    int weight;
    int num = 1;
    
    while(cin>>weight, weight)
    {
        cin >> n;
        
        int dp[1000]={0};
        
        int v,w;
        char comma;
        
        while(n--)
        {
            cin>>v>>comma>>w;
            
            for(int i = weight - w; i >= 0; i--)
            {
                dp[i + w] = max(dp[i + w], dp[i]+v);
            }
        }
        
        int mi = weight;
        
        for(int i = weight; i >= 0; i--)
        {
            if(dp[i] != dp[mi])
            {
                cout << "Case " << num++ << ":\n";
                cout << dp[mi] << "\n" << mi << "\n";
                break;
            }
            
            mi = i;
        }
    }
}

int main()
{
    Solution();
    return 0;
}