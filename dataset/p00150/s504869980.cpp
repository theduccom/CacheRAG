#include <iostream>

using namespace std;

int prime(int n, int k = 2)
{
    if(n < k * k) { return 1; }
    
    if(n % k == 0) { return 0; }
    
    return prime(n, k + 1);
}

int solve(int n)
{
    for(int i = n; i >= 3; i--)
    {
        if(prime(i) * prime(i - 2))
        {
            return i;
        }
    }
    
    return -1;
}

int main()
{
    int n;
    
    while(true)
    {
        cin >> n;
        
        if(n == 0) { break; }
        
        cout << solve(n) - 2 << ' ' << solve(n) << endl;
    }
    
    return 0;
}