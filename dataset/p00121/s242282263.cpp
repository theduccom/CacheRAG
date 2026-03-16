#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>
#include <stack>
#include <set>
//反向bfs
using namespace std;
map<string ,int> t;
int num;
int mv[]={-4,4,1,-1};//上下右左
void bfs(string st)
{
    queue<string> q;
    t[st]=1;
    q.push(st);
    while(!q.empty())
    {

       st=q.front(),q.pop();
//        int nu=st.find('0');
//        for(int i=0;i<4;i++)
//        {
//            int tn=nu+mv[i];
//            if(tn<0||tn>7||tn==3&&mv[i]==1||tn==4&&mv[i]==-1)
//                continue;
//                string tp=st;
//            swap(tp[nu],tp[nu+mv[i]]);
//            if(!t[tp])
//            {
//                    q.push(tp);
//                    t[tp]=t[st]+1;
//            }
//
//
//        }
//        }
//

   // t[st]=1;q.push(st); //起始状?
  //  while(!q.empty())
  //  {
        //st=q.front();q.pop();
        int num=st.find('0');//找到空格位置
        for(int i=0;i<4;++i)
        {
            int tn=num+mv[i];//可能??的数?
            if(tn<0||tn>7||num==3&&mv[i]==1||num==4&&mv[i]==-1)
            //空格在3的?候，4不能??，因?3 4 不相?，反之同理
            {
                continue;
            }
            string tp=st;
            swap(tp[num],tp[num+mv[i]]);//移?物?
            if(!t[tp])//未出??的状?
            {
                q.push(tp);
                t[tp]=t[st]+1;
            }
        }
    }
}

int main()
{
    string st="01234567";
    bfs(st);
    while(scanf("%d",&num)!=EOF)
    {
        st[0]=num+'0';
        for(int i=1;i<8;i++)
        {
            scanf("%d",&num);
            st[i]=num+'0';
        }
        cout<<t[st]-1<<endl;
    }

}