#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include <vector>
#include <map>
#include<cstdlib>


using namespace std;

const int N = 50001;

vector<int> prime;

bool data[N];

void Solution()
{
    /*the way to get prime number also can check the problems which i did before
     ex: 9, 44, 53*/
 
    /*this function is for getting prime numbers and save them to vector*/
    for (int i = 0; i < N; i++)
    {
        data[i] = true;
    }
    
    data[0] = data[1] = false;
    
    for (int i = 2; i * i < N; i++)
    {
        for (int j = 2 * i; j < N; j += i)
        {
            data[j] = false;
        }
    }
    
    for (int i = 2; i < N; i++)
    {
        if (data[i])
        {
            prime.push_back(i);
        }
    }
}

void Cal()
{
    int n;
    
    Solution();

    while (cin>>n)
    {
        int count = 0;
        
        if (n == 0)
        {
            break;
        }
        
        for (int i = 0; 2 * prime[i] <= n; i++) // two prime[i] are the largest prime numbers if n is an even number
        {
            if (n - prime[i] > 0 && data[n - prime[i]])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}

int main()
{
    Cal();
    return 0;
}