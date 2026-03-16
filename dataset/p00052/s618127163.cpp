#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include <vector>
#include <map>
#include<cstdlib>


using namespace std;

void Solution()
{
    int n;
    
    
    while(cin>>n)
    {
        int count = 0;
        
        if (n == 0)
        {
            break;
        }
        
        //algorithm
        for (int i = 5; i <= n; i *= 5)  // 5's multiples can lead to "0"
        {
            count += n / i; // this method is the same as "while(n != 0) count += n/5; n /= 5;"
        }
        
        cout<<count<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}