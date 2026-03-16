#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstdlib>
#include<iomanip>
#include<queue>


using namespace std;

void Solution()
{
    int n;
    int a[11][11];
    
    while (true)
    {
        cin>>n;
        
        if(n == 0)
        {
            break;
        }
        
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                a[i][j] = 0;
            }
        }

        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
                a[i][n] += a[i][j];
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                a[n][j] += a [i][j];
            }
        }
        
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cout<<setw(5)<<a[i][j];
            }
            
            cout<<endl;
        }
    }
    
}

int main()
{
    Solution();
    return 0;
}