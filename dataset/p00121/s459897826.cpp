#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
using namespace std;
map<string,int> dp;
int dir[4]={1,-1,4,-4};
void bfs()
{
    string str="01234567";
    dp[str]=0;
    queue<string> que;
    que.push(str);
    while(!que.empty())
    {
        string str1=que.front();
        que.pop();
        int pos=str1.find('0');
        for(int i=0;i<4;i++)
        {
            int npos=pos+dir[i];
            if(npos<0||npos>7||(pos==3&&npos==4)||(pos==4&&npos==3))
            {
                continue;
            }
            else
            {
                string str2=str1;
                swap(str2[npos],str2[pos]);
                if(dp.find(str2)==dp.end())
                {
                    dp[str2]=dp[str1]+1;
                    que.push(str2);
                }
            }
        }

    }
}
int main()
{
    bfs();
    string str;
    while(getline(cin,str))
    {
        str.erase(remove(str.begin(),str.end(),' '),str.end());
        cout<<dp[str]<<endl;
    }
}