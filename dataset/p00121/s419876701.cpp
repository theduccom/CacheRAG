#include<cstdio>
#include<map>
#include<queue>
#include<string>
#include<iostream>
#include <algorithm>
using namespace std;
const int MAX = 1000;
int dir[4]={4, -4,1, -1 };//4个?找方向
map<string,int> dp;//存?最小?数
void BFS()
{
    //建立?列
    queue<string> que;
    //放入初始状?
    que.push("01234567");
    dp["01234567"]=0;

    while(que.size())
    {
        string tem2 = que.front();
        que.pop();

        int old =  tem2.find('0',0);
        for(int i=0;i<4;i++)
        {
            int x = old +dir[i];
            if(x>=0&&x<8&&!(old==3&&i==2)&&!(old==4&&i==3))
            {
                string tem=tem2;
                swap(tem[old],tem[x]);
                if(dp.find(tem)==dp.end())//如果存在tem?跳?，防止死循?
                {
                    dp[tem]=dp[tem2]+1;
                    //cout<<dp[tem]<<endl;
                    que.push(tem);
                }
            }
        }
    }
}
int main()
{
    BFS();
    string str;
    while(getline(cin,str))
    {
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        printf("%d\n",dp[str]);
        //cout<<str.find('0',0)<<endl;
    }
    return 0;
}