#include<queue>
#include<map>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define SC(x) scanf("%d",&x);
#define pr(x)  cout << x << endl;
#define mem(arr,v) memset(arr,v,sizeof arr);
#define bug(x) cout << "#x = " << x <<endl;
const int inf = 0x3f3f3f3f;
const int maxn = 1e5 + 5;
typedef long long ll;
using namespace std;

//set<Node> S;
map <string,int> dp;
int dir[4] = {1,-1,4,-4};

bool f(int pos) {
	return pos >= 0 && pos < 8;
}


//
//void bfs() {
//	queue<string> q;
//	q.push("01234567");
//	M["01234567"] = 0;
//	
//	while(!q.empty()) {
//		string s = q.front();	q.pop();
//		int pos;
//		for(int i = 0 ; i < 8 ; i++)
//			if(s[i] == '1') {
//				pos = i;
//				break;
//			}
//
//		for(int i = 0 ; i < 4; i++) {
//			int px = pos + dir[i];
//			if(!f(px) || (px == 3 && i == 0) || (px == 4 && i == 1) )	continue;
//				
//			string cur = s;
//			swap(cur[pos],cur[px]);
//			if(M.count(cur) == 0){
//				M[cur] = M[s] + 1;
//				q.push(cur);
//			}
//		}
//	}
//}
void bfs()  
{  
    queue<string> que;  
    que.push("01234567");  
    dp["01234567"] = 0;  
    while (!que.empty())  
    {  
        string now = que.front(); que.pop();  
        // p是'0'的位置  
        int p = 0;  
        for (int j = 0; j < 8; ++j)  
        {  
            if (now[j] == '0')  
            {  
                p = j;  
                break;  
            }  
        }  
   
        for (int i = 0; i < 4; ++i)  
        {  
            int n = p + dir[i];  
            if (0 <= n && n < 8 &&   
                !(p == 3 && i == 0) && // 右上角不能再往右了  
                !(p == 4 && i == 1))   // 左下角不能再往左了  
            {  
                string next = now;  
                swap(next[p], next[n]);  
                if (dp.find(next) == dp.end())  
                {  
                    dp[next] = dp[now] + 1;  
                    que.push(next);  
                }  
            }  
        }  
    }  
}  

int main() {
	bfs();
	string str;
	while(getline(cin,str)){
		str.erase(remove(str.begin(),str.end(),' '),str.end());
		pr(dp[str]);
	}
}