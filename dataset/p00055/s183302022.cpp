#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cstdio>

using namespace std;

double s(double n)
{
    double ans=n;
    for(int i=1;i<10;++i)
    {
        if(i&1==1) n *= 2;
        else n /= 3;
        ans += n;
    }
    return ans;
}
int main()
{
    double n;
    while(cin >> n) printf("%.8f\n",s(n));
}