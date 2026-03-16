#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <queue>
#include <map>
#include <string>
#include <iostream>
using namespace std;
map<string,int> dp;
int dir[4]={-1,1,-4,4};
void bfs()
{
    string t="01234567";
    dp[t]=0;
    queue<string> que;
    que.push(t);
    while(!que.empty())
    {
        int p=0;
        string t=que.front();que.pop();
        for(int i=0;i<8;i++)
            if(t[i]=='0')
        {
            p=i; break;
        }
        for(int i=0;i<4;i++)
        {
            int n=p+dir[i];
            if(n<0||n>7||(p==3&&i==1)||(p==4&&i==0)) continue;
            string next = t;
            swap(next[n],next[p]);
            if(dp.find(next)==dp.end())
            {
                dp[next]=dp[t]+1;
                que.push(next);
            }
        }
    }
}
int main()
{
    bfs();
    string line;
    while (getline(cin, line))
    {
        line.erase(remove(line.begin(), line.end(), ' '), line.end());
        cout << dp[line] << endl;
    }
    return 0;
}