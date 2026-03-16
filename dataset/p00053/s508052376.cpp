#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include <vector>
#include <map>

using namespace std;

void Solution()
{
    int N = 105000; // to judge if the number is prime number
    int ans[10000];
    
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
    
    
    for(int i = 0, j = 0; i < N; i++)
    {
        if(data[i])
        {
            ans[j++] = i; //check the loop and save the prime number to array
            
            if(j == 10000)
            {
                break;
            }
        }
    }
    
    while(1)
    {
        int n;
        
        cin>>n;
        
        if(n == 0)
        {
            break; //out of loop
        }
        
        long sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            sum += ans[i];
        }
        
        cout<<sum<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}