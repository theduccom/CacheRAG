#include <bits/stdc++.h>
using namespace std;

#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

int main()
{
    string hoge;
    getline(cin, hoge);
    rep(i, hoge.length())
    {
        if ('a' <= hoge[i] && hoge[i] <= 'z')
        {
            hoge[i] -= ('a' - 'A');
        }
    }
    cout << hoge << endl;
}