#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include <set>
#include <vector>

using namespace std;

#define CLR(x) memset(x,0,sizeof x)
#define ll long long

const int inf=0x3f3f3f3f;
const int maxn=1e5+5;
const int MOD=5e5+5;

typedef pair <string, int> st;  //?子

map <string, int> num;  //映射

int dir[4] = {-1, 1, 4, -4};  //可能的移?策略

void bfs()
{
    queue <st> que;
    num["01234567"] = 0;//映射的是改到初状?需要的?奏数
    que.push(st("01234567", 0));  //初状?入?，0表示??数

    while(!que.empty())
    {
        string s = que.front().first;
        int cur = que.front().second;
        que.pop();

        for(int i = 0; i < 4; i++)
        {
            string ns = s;
            int nxt = cur + dir[i];  //nxt和cur表示0的位置和能与0交?的位置
            if(nxt < 0 || nxt > 7|| nxt == 3 && cur == 4 || nxt == 4 && cur == 3) continue;
            swap(ns[cur], ns[nxt]);
            
            if(!num.count(ns))
            {
                //不能用num[ns]（?奏数），不然初状?（?奏?0，??次数?1），会?致初状?被改??
                num[ns] = num[s] + 1;
                que.push(st(ns, nxt));
            }
        }
    }
}

int main()
{
    bfs();
    string s;
    
    while(cin >> s)
    {
        for(int i = 0; i < 7; i++)
        {
            char x;
            cin >> x;
            s += x;
        }
        cout << num[s] << endl;
    }

    return 0;
}

/*
?目附?
?出0~7的序列（2*4），只能0和周?数字交?，?最少交?多少次可以是?出的序列?成0 1 2 3 4 5 6 7。
有一个2*4的8个格子
0 1 2 3
4 5 6 7
是最最初的状?
0代表?里没有放?牌，其他数字表示放了相?数字的?牌。
?可以?行如下操作：移?0周?的?牌到0，然后移?后，被移?的那个位置就没有?牌了。
?入??束的?个?牌的位置
比如：
1 0 2 3 4 5 6 7
1 0 2 3
4 5 6 7
只需要把1移?到0的位置，???1最少，?出此最少??。
*/