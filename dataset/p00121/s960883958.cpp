// AOJ 0121 http:/judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0121/

#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <sstream>

using namespace std;

string swp(string s,const int&a,const int&b){swap(s[a],s[b]);return s;}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s = "01234567";

    queue<string> q;
    map<string, int> m;

    q.push(s);
    m[s] = 0;

    while (q.size()) {
        string t = q.front(); q.pop();
        int idx = t.find('0');
        string u;
        if (idx - 1 >= 0 && idx != 4) {
            u = swp(t, idx, idx - 1);
            if (m.find(u) == m.end()) {
                m[u] = m[t] + 1;
                q.push(u);
            }
        }
        if (idx + 1 < 8 && idx != 3) {
            u = swp(t, idx, idx + 1);
            if (m.find(u) == m.end()) {
                m[u] = m[t] + 1;
                q.push(u);
            }
        }
        if (idx - 4 >= 0) {
            u = swp(t, idx, idx - 4);
            if (m.find(u) == m.end()) {
                m[u] = m[t] + 1;
                q.push(u);
            }
        }
        if (idx + 4 < 8) {
            u = swp(t, idx, idx + 4);
            if (m.find(u) == m.end()) {
                m[u] = m[t] + 1;
                q.push(u);
            }
        }
    }

    string line; stringstream ss;
    while (getline(cin, line)) {
        ss << line;
        string t = "";
        for (int i = 0; i < 8; ++i) {char c;ss >> c;t += c;}
        cout << m[t] << endl;
    }
}