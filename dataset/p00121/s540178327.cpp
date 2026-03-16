#include<bits/stdc++.h>
using namespace std;

map<string, int> dp;
int x[] = {1, -1, 4, -4};

void bfs()
{
    dp["01234567"] = 0;
    queue<string> q;
    q.push("01234567");
    while(!q.empty()) {
        string now = q.front();
        q.pop();
        int p;
        for(int i = 0; i <= 7; ++i) {
            if(now[i] == '0') {
                p = i;
                break;
            }
        }
        for(int i = 0; i < 4; ++i) {
            int qn = p + x[i];
            if(qn < 0 || qn > 7 || (p == 3 && qn == 4) || (p == 4 && qn == 3)) continue;
            string next = now;
            swap(next[p], next[qn]);
            if(dp.find(next) == dp.end()) {
                dp[next] = dp[now] + 1;
                q.push(next);
            }
        }
    }
}

int main()
{
    bfs();
    string line;
    while(getline(cin, line)) {
        line.erase(remove(line.begin(), line.end(), ' '), line.end());
        cout << dp[line] << endl;
    }
    return 0;
}