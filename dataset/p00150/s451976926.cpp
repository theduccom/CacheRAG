#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

const int MAX = 10010;

bool p[MAX];

int main()
{
    p[0] = p[1] = 1;
    rep(i,MAX)if(!p[i])for(int j= i*2;j<MAX;j+=i)p[j] = 1;

    int n;
    while(cin >> n && n)
    {
        for(int i = n;i!=0;i--)if(!p[i] && !p[i-2]){ cout << i-2 << " " << i << endl;break;}
    }
    return 0;
}