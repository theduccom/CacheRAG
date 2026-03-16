//??????????¨????????????????????¬¬??????????¢?
//BFS DP ?§£?????´??????
#include <iostream>
#include <stdio.h>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int dm[4]={1,-1,4,-4};
map<string,int> DP;

void BFS()
{
    queue<string> que;
    que.push("01234567");
    DP["01234567"]=0;
    while(que.size())
    {
        string now=que.front();
        que.pop();
        int p=0;
        for(int i=0;i<8;i++)
        {
            if(now[i]=='0')
            {
                p=i;
                break;
            }
        }

        for(int i=0;i<4;i++)
        {
            int d=p+dm[i];
            if(d>=0&&d<=7&&!(p==3&&i==0)&&!(p==4&&i==1))
            {
                string next=now;
                swap(next[p],next[d]);
                if(!DP[next])
                {
                    DP[next]=DP[now]+1;
                    que.push(next);
                }
            }
        }
    }
}

int main()
{
    BFS();
    int d;
    while(~scanf("%d",&d))
    {
        string temp;
        temp+=d+'0';
        for(int i=0;i<7;i++) {scanf("%d",&d); temp+=d+'0';}
        cout<<DP[temp]<<endl;
    }
    return 0;
}