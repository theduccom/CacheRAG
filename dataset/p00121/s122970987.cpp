#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>
#include<queue>
#include<map>
#include<algorithm>
#define N 1100
#define INF 2<<30
using namespace std;
map<string,int>mp;
void bfs()
{
    int p;
    mp.clear();
    string ss="01234567";
    queue<string>q;
    int dir[4]= {1,-1,4,-4};
    q.push(ss);
    mp[ss]=0;
    while(!q.empty())
    {
        string now=q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            if(now[i]=='0')
            {
                p=i;
                break;
            }
        }
        for(int k=0; k<=3; k++)
        {
            int tx=p+dir[k];
            if((k==1&&p==4)||(k==0&&p==3))
                continue;
            string next=now;
            if(tx>=0&&tx<8)
            {
                swap(next[tx],next[p]);
                if(mp[next]==0)
                {
                    mp[next]=mp[now]+1;
                    q.push(next);
                }
            }
        }
    }
}
int main()
{
    string s,str;
    bfs();
    while(getline(cin,s))
    {
        str.clear();
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=' ')
                str=str+s[i];
        }
        cout<<mp[str]<<endl;
    }
    return 0;
}