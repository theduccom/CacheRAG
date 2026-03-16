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
    while (true)
    {
        string a[8];
        vector<int> tracex;
        vector<int> tracey;
        bool flag = false;
        rep(i, 8) if(!(cin >> a[i])) return 0;
        rep(i, 8)
            rep(j, 8) if (a[i][j] == '1')
        {
            tracex.push_back(j);
            tracey.push_back(i);
        }
        REP(i, 1, tracex.size())
        tracex[i] -= tracex[0];
        REP(i, 1, tracey.size())
        tracey[i] -= tracey[0];
        //tracex[0]=0;tracey[0]=0;
        if (tracex[3] == 1 && tracey[3] == 1)
            cout << "A" << endl;
        if (tracex[3] == 3)
            cout << "C" << endl;
        if (tracey[3] == 3)
            cout << "B" << endl;
        if (tracex[1] == -1 && tracey[3] == 2)
            cout << "D" << endl;
        if (tracex[3] == 2)
            cout << "E" << endl;
        if (tracex[2] == 1 && tracey[3] == 2)
            cout << "F" << endl;
        if (tracex[2] == -1 && tracey[2] == 1)
            cout << "G" << endl;
        if (flag)
            break;
    }
    return 0;
}