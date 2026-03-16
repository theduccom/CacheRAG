#include<cstdio>    
#include<cstring>    
#include<algorithm>    
#include<iostream>  
#include<cmath>  
#include<map>  
#include<queue>  
using namespace std;    
struct node  
{  
    int mp[2][4];  
    int dis;  
    int x,y;  
}f,t;  
int FLAG;  
int dx[]={-1,1,0,0};  
int dy[]={0,0,-1,1};  
bool isok(int x,int y)  
{  
    return x>=0&&x<2&&y>=0&&y<4;  
}  
int ca[]={1,1,2,6,24,120,720,5040,40320,362880};   
int ANS[1000007];  
int cantor(node &t)    
{    
    int sum=0,cnt=0;    
    int s[9];  
    for(int i=0;i<2;i++)  
    {  
        for(int j=0;j<4;j++)  
        {  
            s[cnt++]=t.mp[i][j];  
        }  
    }  
    for(int i=0;i<8;i++)    
    {    
     int num=0;    
        for(int j=i+1;j<8;j++)    
          if(s[j]<s[i]) num++;    
        sum+=(num*ca[8-i-1]);    
    }    
    return sum+1;    
}    
const int MAXN=1000007;  
int Hash[MAXN];  
const int END=1;  
bool HashInsert(int value,int dis)  //就是?里 ，无?它  
{  
      int v=value%MAXN;  
      while(Hash[v]!=-1&&Hash[v]!=value){  
          v+=10;  
          v%=MAXN;  
      }  
      if(Hash[v]==-1){  
          ANS[v]=dis;  
          Hash[v]=value;  
         return true;  
      }  
      return false;  
  }  
bool isvis(node &t,int dis)  
{  
    int val=cantor(t);  
    if(val==END) FLAG=1;  
    return HashInsert(val,dis);  
}  
bool over(node &t)  
{  
    int cro=0;  
    for(int i=0;i<2;i++)  
    {  
        for(int j=0;j<4;j++)  
        {  
            if(t.mp[i][j]!=cro) return false;  
            cro++;  
        }  
    }  
    return true;  
}  
void bfs()  
{  
    FLAG=0;  
      
    queue<node> q;  
    q.push(f);  
    while(!q.empty())  
    {  
        f=q.front();q.pop();  
        for(int d=0;d<4;d++)  
        {  
            t=f;  
            t.x=f.x+dx[d];  
            t.y=f.y+dy[d];  
            if(isok(t.x,t.y))  
            {  
                t.dis++;  
                swap(t.mp[f.x][f.y],t.mp[t.x][t.y]);  
                if(isvis(t,t.dis))  //??   
                {  
                    q.push(t);  
                }  
            }  
        }  
    }  
}  
int main()  
{memset(Hash,-1,sizeof(Hash));  
    f.dis=0;  
    int cnt=0;  
    for(int i=0;i<2;i++)  
        {  
            for(int j=0;j<4;j++)  
            {  
                f.mp[i][j]=cnt++;  
            }  
        }  
    f.x=0;  
    f.y=0;  
    Hash[1]=1;  
    ANS[1]=0;  
    bfs();  
    while(~scanf("%d",&f.mp[0][0]))  
    {  
        f.dis=0;  
        for(int i=1;i<=3;i++) scanf("%d",&f.mp[0][i]);  
        for(int i=0;i<=3;i++) scanf("%d",&f.mp[1][i]);  
        printf("%d\n",ANS[cantor(f)]);  
    }  
    return 0;  
}  