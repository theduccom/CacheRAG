#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<queue>
#include<map>
using namespace std;
#define INF 0x3f3f3f3f
const int maxn=304;

int dir[]={-4,4,-1,1};   //上下左右
map<string,int>table;
void bfs(string st)
{
    queue<string>q;
    table[st]=1;    //起始状态
    q.push(st);
    while(!q.empty())
    {
        st=q.front(); q.pop();
        int num=st.find('0');
        for(int i=0;i<4;i++)
        {
            int tn=num+dir[i];
            if(tn<0 || tn>7 || (num==3 && dir[i]==1) || (num==4 && dir[i]==-1))
                continue;
            string tp=st;
            swap(tp[num],tp[num+dir[i]]);
            if(!table[tp])
            {
                q.push(tp);
                table[tp]=table[st]+1;
            }
        }
    }
}


int main()
{
    int num;
    string st="01234567";
    bfs(st);
   while(~scanf("%d",&num))
   {
       st[0]=num+'0';
   
    for(int i=1;i<8;i++)
    {
        scanf("%d",&num);
        st[i]=num+'0';
    }
    printf("%d\n",table[st]-1);
   }
}
