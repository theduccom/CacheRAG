
#include <cstdio>
#include <queue>
#include <map>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

map<string, int> d;
int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

void bfs()
{
    queue<string> q;
    q.push("01234567");
    d["01234567"] = 1;
    while(!q.empty())
    {
        string str, s = q.front(); q.pop();
        str = s;
        for(int i = 0; i < 4; i++)
        {
            s = str;
            int k = -1;
            for(int j = 0; j < 8; j++)
            {
                if('0' == s[j])
                {
                    k = j;
                    break;
                }
            }
            int px = k / 4;
            int py = k % 4;
            int x = px + dir[i][0];
            int y = py + dir[i][1];
            if(x >= 0 && x <= 1 && y >= 0 && y < 4)
            {
                int a = 4 * x + y;
                int tmp = d[s];
                swap(s[k], s[a]);
                if(0 == d[s])
                {
                    q.push(s);
                    d[s] = tmp + 1;
                }
            }
        }
    }
}

int main()
{
    int a;
    d.clear();
    bfs();
    while(~scanf("%d", &a))
    {
        string s = "";
        s += '0' + a;
        for(int i = 1; i < 8; i++)
        {
            scanf("%d", &a);
            s += '0' + a;
        }
        printf("%d\n", d[s] - 1);
    }
    return 0;
}