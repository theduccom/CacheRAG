#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;
map<string,int> dp;
string s;
int dx[]={-1,1,-4,4};
void bfs()
{
    queue<string>que;
    que.push("01234567");
    dp["01234567"]=0;
    while(que.size()){
        string now=que.front(); que.pop();
        int p=0;
        for(int i=0;i<8;i++){
            if(now[i]=='0'){
                p=i; break;
            }
        }
        for(int i=0;i<4;i++){
            int nx=p+dx[i];
            if(nx>=0&&nx<8&&!(p==3&&i==1)&&!(p==4&&i==0)){
                string next;
                next=now;
                swap(next[nx],next[p]);
                if(dp.find(next)==dp.end()){
                    dp[next]=dp[now]+1;
                    que.push(next);
                }
            }
        }
    }
}
int main()
{
    int x;
    bfs();
    while(scanf("%d",&x)!=EOF){
        s="";
        s+=(x+'0');
        for(int i=0;i<7;i++)
        {
            scanf("%d",&x);
            s+=x+'0';
        }
        cout<<dp[s]<<endl;
    }
    return 0;
}