#include <iostream>
#include <queue>
#include <stdio.h>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

typedef pair<string, int> P;

const int INF = 100000000;

//&#36755;入
string a;

//移&#21160;方向
int op[4] = {-1, 1, -4, 4};

map<string, int> dp;                        //保存从string&#21464;到"01234567"的int

//&#35745;算从"01234567"&#36716;&#25442;到其他序列所需的最小&#27493;数
void bfs(){
    //初始化
    queue<P> que;
    que.push(P("01234567", 0));
    dp["01234567"] = 0;
    //&#23485;度&#20248;先搜索
    while(!que.empty()){
        P p = que.front();
        que.pop();
        string s = p.first;
        int cur = p.second;
        for(int i = 0; i < 4; i ++){
            //&#26500;造下一次交&#25442;
            int next = cur + op[i];
            string str = s;
            swap(str[cur], str[next]);
            map<string, int>::iterator it = dp.find(str);
            //判断是否可移&#21160;以及是否&#35775;&#38382;&#36807;
            if(0 <= next && next < 8 
                && !(cur == 3 && next == 4) && !(cur == 4 && next == 3) 
                && it == dp.end()){

                que.push(P(str, next));
                dp[str] = dp[s] + 1;
            }
        }
    }
}

void solve(){
    //&#21024;除空格
    a.erase(remove(a.begin(), a.end(), ' '), a.end());
    // remove：去除容器中的所有的' ' 
    // 函数返回新区&#38388;最后一个元素的下一个位置
    cout<<dp[a]<<endl;
}

int main(){
    //先逆向&#26500;造所有情况，后直接&#35835;取&#36755;入用例的&#32467;果
    bfs();
    while(getline(cin, a)){
        solve();
    }
    return 0;
}