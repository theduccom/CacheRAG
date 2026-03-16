#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include <vector>
#include <map>
#include<cstdio>
#include<cstdlib>

using namespace std;

void Solution()
{
    int N = 105000; // to judge if the number is prime number
    int n;
    bool data[N];
    
    for(int i = 0;i < N; i++)
    {
        if(i % 2 == 0) // remove the numbers which can be devide by 2
        {
            data[i] = false;
        }
        else
        {
            data[i] = true;
        }
    }
    
    data[1] = false; //remove 1
    data[2] = true; // casue 2 is prime number
    
    for(int i = 3; i < N; i += 2) // remove 3, 5, 7's multiples
    {
        if(data[i])
        {
            for(int j = i + i; j < N; j += i) //remove 3, 5, 7's multiples
            {
                data[j] = false;
            }
        }
    }
   
    while(cin>>n)
    {
        
                
        for(int i = n - 1; i > 1; i--)
        {
            if(data[i])
            {
                cout<<i;
                break;
            }
        }
        
        for(int i = n + 1; i < N; i++)
        {
            if(data[i])
            {
                cout<<" "<<i<<endl;
                break;
            }
        }
        
    }
}

int main()
{
    Solution();
    return 0;
}