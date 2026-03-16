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
    int n;
    cin >> n;
    rep(i, n)
    {
        char temp;
        stack<int> as, bs, cs;
        string a, b;
        cin >> a >> b;
        rep(j, a.length()) as.push(a[j] - '0');
        rep(j, b.length()) bs.push(b[j] - '0');
        int keta = max(as.size(), bs.size());
        int aa, bb, cc = 0;
        rep(j, keta)
        {
            if (as.size() != 0)
            {
                aa = as.top();
                as.pop();
            }
            else
            {
                aa = 0;
            }

            if (bs.size() != 0)
            {
                bb = bs.top();
                bs.pop();
            }
            else
            {
                bb = 0;
            }
            int hoge = aa + bb + cc;
            cc = hoge / 10;
            cs.push(hoge - 10 * cc);
        }
        if (cc != 0)
        {
            cs.push(cc);
        }
        if (cs.size() > 80)
        {
            cout << "overflow";
            if(DEBUG) cout<<cs.size();
        }
        else
        {
            while (cs.size() != 0)
            {
                cout << cs.top();
                cs.pop();
            }
        }
        cout << endl;
    }
    return 0;
}