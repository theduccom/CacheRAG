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
    double a[10];
    
    while(cin>>a[0])
    {
        double sum = a[0]; //to save sum
        
        for(int i = 1; i < 10; i++)
        {
            if(i % 2 == 1)
            {
                a[i] = a[i - 1] * 2;
            }
            else
            {
                a[i] = a[i - 1] / 3;
            }
            
            sum += a[i];
        }
        
        cout<<fixed<<setprecision(8)<<sum<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}