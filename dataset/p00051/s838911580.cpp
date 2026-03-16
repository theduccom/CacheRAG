#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int N;
    string s, t;
    cin >> N;
    while (N--) {
        cin >> s;
        t = s;
        sort(s.begin(), s.end(), greater<char>());
        sort(t.begin(), t.end());
        cout << stoi(s) - stoi(t) << endl;
    }
    return 0;
}