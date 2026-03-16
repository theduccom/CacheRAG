#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <queue>
#include <string.h>
using namespace std;
map <string, int> dp;
map <string, int>::iterator it;
void bfs();
int dx[5];

int main()
{
    dx[0] = 1;
    dx[1] = -1;
    dx[2] = 4;
    dx[3] = -4;
    bfs();
    string s;
    while(getline(cin, s))
    {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        printf("%d\n", dp[s]);
    }
    return 0;
}

void bfs()
{
    queue <string> q;
    q.push("01234567");
    dp["01234567"] = 0;
    while(!q.empty())
    {
        int p;
        string now = q.front();
        q.pop();
        int i;
        for(i = 0; now[i]; i++)
            if(now[i] == '0')
            {
                p = i;
                break;
            }
        for(i = 0; i < 4; i++)
        {
            int nx;
            nx = p + dx[i];
            if(p == 3 && nx == 4 || p == 4 && nx == 3 || nx < 0 || nx > 7)
                continue;
            string nx_s = now;
            swap(nx_s[nx], nx_s[p]);
            it = dp.find(nx_s);
            if(it == dp.end())
            {
                q.push(nx_s);
                dp[nx_s] = dp[now] + 1;
            }
        }
    }
    return ;
}