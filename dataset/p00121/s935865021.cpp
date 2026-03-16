#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <assert.h>
#include <time.h>
//#define _Test
typedef long long LL;
const int INF = 500000001;
const double EPS = 1e-9;
const double PI = acos(-1.0);
using namespace std;
int a[15], dir[4]={1, -1, -4, 4};
char ch[15];
map<string, int> mm;
struct p
{
    char s[15];
    int flag;
}fir, en;
queue<p> qq;
bool check(int x, int y)
{
    if(x < 0 || x >= 8)
    {
        return false;
    }
    if(x == 3 && y == 4 || x == 4 && y == 3)
    {
        return false;
    }
    return true;
}

void bfs()
{
    while(!qq.empty())
    {
        en = qq.front();
        qq.pop();
        for(int i = 0; i < 4; i++)
        {
            fir.flag = en.flag + dir[i];
            if(check(fir.flag, en.flag))
            {
                strcpy(fir.s, en.s);
                swap(fir.s[en.flag], fir.s[fir.flag]);
                if(mm.find(fir.s) == mm.end())
                {
                    mm[fir.s] = mm[en.s] + 1;
                    qq.push(fir);
                }
            }
        }
    }
}
int main()
{
    #ifdef _Test
        freopen("test0.in", "r", stdin);
        freopen("test0.out", "w", stdout);
        srand(time(NULL));
    #endif
    char c[100];
    while(~scanf("%d", &a[0]))
    {
        for(int i = 1; i < 8; i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < 8; i++)
        {
            fir.s[i] = i + '0';
            c[i] = a[i] + '0';
        }
        c[8] = '\0';
        fir.flag = 0;
        fir.s[8] = '\0';
        mm[fir.s] = 1;
        qq.push(fir);
        bfs();

        printf("%d\n", mm[c] - 1);
    }
    return 0;
}