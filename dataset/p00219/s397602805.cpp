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

const int MAX = 10;

int main()
{
    int n;
    while(cin >> n && n)
    {
        int ice[MAX] = {};
        int t;
        REP(n){cin >> t; ice[t]++;}

        REP(MAX){ rep(j,ice[i]) cout << "*"; if(ice[i] == 0) cout << "-"; cout << endl;}

    }
    return 0;
}