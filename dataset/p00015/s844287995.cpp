#include <bits/stdc++.h>

using namespace std;

string sum(string &a, string &b)
{
    if (a.size() < b.size()) swap(a, b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int N = a.size();
    
    while ((int)b.size() < N) {
        b.push_back('0');
    }
    
    bool up = 0;
    string res;
    for (int i = 0; i < N; i++) {
        int v = up + (a[i] - '0') + (b[i] - '0');
        if (v >= 10) {
            up = 1;
            v %= 10;
        } else {
            up = 0;
        }
        res += to_string(v);
    }
    if (up) res += "1";
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int N;
    string a, b;
    cin >> N;
    while (N--) {
        cin >> a >> b;
        string res = sum(a, b);
        if (res.size() > 80) {
            cout << "overflow" << endl;
        } else {
            cout << res << endl;
        }
    }
    return 0;
}