#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;
string s;
map<string, int> v;
int main() {
    queue<pair<string, int> > q;
    q.push({"01234567", 0});
    v["01234567"]=0;
    while (!q.empty()) {
        string ss = q.front().first;
        int step = q.front().second;
        q.pop();
        int p = 0;
        while (p < 8 && ss[p] != '0') ++p;
        swap(ss[p], ss[p + (p < 4 ? 4 : -4)]);
        if (!v.count(ss)) {
            v[ss] = step + 1;
            q.push({ss, step + 1});
        }
        swap(ss[p], ss[p + (p < 4 ? 4 : -4)]);
        if (p % 4 != 3) {
            swap(ss[p], ss[p + 1]);
            if (!v.count(ss)) {
                v[ss] = step + 1;
                q.push({ss, step + 1});
            }
            swap(ss[p], ss[p + 1]);
        }
        if (p % 4 != 0) {
            swap(ss[p], ss[p - 1]);
            if (!v.count(ss)) {
                v[ss] = step + 1;
                q.push({ss, step + 1});
            }
            swap(ss[p], ss[p - 1]);
        }
    }
    while (getline(cin, s)) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        cout <<v[s]<<endl;
    }
    return 0;
}

