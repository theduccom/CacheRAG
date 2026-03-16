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
    int a[3] = {0};
    int b = 0, c = 0;
    while (scanf("%d,%d,%d", &a[0], &a[1], &a[2]) != EOF)
    {
        //cout<<a[0]<<endl;
        if (a[2] * a[2] == a[0] * a[0] + a[1] * a[1])
            b++;
        else if (a[0] == a[1])
            c++;
    }
    cout << b << endl
         << c << endl;
    return 0;
}