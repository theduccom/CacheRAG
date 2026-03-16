#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include <vector>
#include <map>
#include<cstdlib>
#include<iomanip>

using namespace std;

void Solution()
{
    double x, h;
    
    while (cin>>x>>h)
    {
        if (x == 0 && h == 0)
        {
            break;
        }
        
        cout<<fixed<<setprecision(6)<<(x * x) + 2 * x * sqrt(h * h + (x/2) * (x/2))<<endl; // 2xh = 4 * (1/2xh)
    }
}

int main()
{
    Solution();
    return 0;
}