#include <bits/stdc++.h>
using namespace std;

#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

int pow(int i)
{
    int ans = 1;
    rep(j, i) ans *= 2;
    return ans;
}

int main()
{
    int n;
    while (cin >> n)
    {
        rep(i, 10)
        {
            if (n & 0b1 == 1)
            {
                cout << pow(i);
                if(n!=1) cout<<" ";
            }
            n = n >> 1;
        }
        cout<<endl;
    }
    return 0;
}