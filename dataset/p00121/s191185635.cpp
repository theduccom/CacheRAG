#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
string str;
map<string,int>m;
queue<string>q;
int dir[]={1,-1,4,-4};

void bfs()
{
    q.push("01234567");
    while(!q.empty())
    {
        string temp=q.front();
        q.pop();
        int pos=temp.find('0');
        for(int i=0;i<4;++i)
        {
            int x=pos+dir[i];
            if(x>=0&&x<8&&(!(pos==3&&i==0))&&(!(pos==4&&i==1)))
            {
                string u=temp;
                swap(u[x],u[pos]);
                if(m[u]==0)
                {
                    m[u]=m[temp]+1;
                    q.push(u);
                }
            }
        }
    }
}
int main()
{
    //freopen("in.txt","r",stdin);
    bfs();
    m["01234567"]=0;
    while(1)
    {
        str="";
        int n=8,b;
        while(n--)
        {
            if(!(cin>>b))return 0;
            str+=b+'0';
        }
        printf("%d\n",m[str]);
    }

}

