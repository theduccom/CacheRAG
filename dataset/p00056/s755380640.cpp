#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int p[50001];
int prime()
{
    for(int i=0;i<=50000;++i) p[i] = 1;
    for(int j=4;j<=50000;j+=2) p[j] = 0;
    for(int i=3;i<=50000;++i)
    {
        if(!p[i]) continue;
        for(int j=i+i;j<=50000;j+=i) p[j] = 0;
    }
}
int solve(int n)
{
    int ans=0;
    int half = n / 2;
    if(p[n-2]) ++ans;
    if(n%2==0){
        for(int i=3;i<=half;i+=2)
        {
            if(p[i] && p[n-i]) ++ans;
        }
    }
    return ans;
}
int main()
{
    int n;
    prime();
    while(cin >> n && n) cout << solve(n) << endl;
}