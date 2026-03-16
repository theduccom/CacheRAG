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
    int amount = 0;
    int income = 0;
    
    int m, n;
    
    int count = 0;
    
    char comma;
    
    while(cin>>m>>comma>>n)
    {
        income += m * n;
        amount += n;
        count++;
    }
    
    cout<<income<<endl;
    cout<<(int)((double)amount / count + 0.5)<<endl;   //this way also can be used to solve half-adjusting
}

int main()
{
    Solution();
    return 0;
}