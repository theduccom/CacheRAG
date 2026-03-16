#include <iostream>
#include <queue>
#include <map>
#include <string>
#include <stdio.h>

using namespace std;

map<string, int> ans;

void bfs()
{
    int dx[4] = {-1, 4, 1, -4};
    string sunxu = "01234567";
    queue<string> que;
    que.push(sunxu);
    ans[sunxu] = 0;
    ans.clear();

    while(que.size())
    {
        sunxu = que.front();
        que.pop();

        int x;
        for (int i = 0; i < 8; i++)
        {
            if (sunxu[i] == '0')
                x = i;
        }
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            if ((x == 4 && i == 0) || (x == 3 && i == 2))
                continue;
            if (nx >= 0 && nx < 8)
            {
                string s = sunxu;
                swap(s[nx], s[x]);
                if (ans[s] == 0  && s != "01234567")
                {
                    que.push(s);
                    ans[s] = ans[sunxu] + 1; 
                }
            }

        }
    }
}

int main()
{
    bfs();

    int num;
    string sunxu;

    while(~scanf("%d", &num))
    {
        sunxu.clear();
        sunxu += num + '0';
        for (int i = 1; i < 8; i++)
        {
            scanf("%d", &num);
            sunxu += num + '0';
        }

        printf("%d\n", ans[sunxu]);
    }
}