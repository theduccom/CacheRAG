#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int dx[] = {1, -1, 4, -4};
map<string, int> cache;

void make_cache() {
    queue<string> q; q.push("01234567");
    cache["01234567"] = 0;
    while (!q.empty()) {
        string s = q.front(); q.pop();
        int zero_p = s.find('0');
        for (int i = 0; i < 4; i++) {
            if (zero_p  < 4 && i == 3) continue;
            if (zero_p >= 4 && i == 2) continue;
            if (zero_p % 4 == 0 && i == 1) continue;
            if (zero_p % 4 == 3 && i == 0) continue;
            string t = s;
            swap(t[zero_p], t[zero_p+dx[i]]);
            if (cache[t] != 0 || t == "01234567") continue;
            q.push(t);
            cache[t] = cache[s] + 1;
        }
    }
}

int main() {
    make_cache();
    string str;
    while (getline(cin, str)) {
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        cout << cache[str] << endl;
    }
   return 0;
}