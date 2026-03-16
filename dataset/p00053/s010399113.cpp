#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int isprime(int n)
{
    int i=3;
    while(i*i<=n){
        if(n%i==0) return false;
        i+=2;
    }
    return true;
}
int ans(int n)
{
    int i=1;
    int a=2;
    int k=3;
    while(i < n)
    {
        if(isprime(k))
        {
            a += k;
            ++i;
        }
        k+=2;
    }
    return a;
}
int main()
{
    int n;
    while(cin >> n && n) cout << ans(n) << endl;
}