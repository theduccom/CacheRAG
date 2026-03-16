#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

const int di[] = {1, -1, 4, -4};

int main()
{
    map<string, int> memo;
    queue<string> que;
    string st = "01234567", ss;
    que.push(st);
    memo[st] = 0;
    while(!que.empty()) {
        string s = que.front(); que.pop();
        int a = s.find('0');
        for(int i = 0; i < 4; i++) {
			if(a%4==0 && i==1)continue;
			if(a%4==3 && i==0)continue;
            int b = a + di[i];
            if(b < 0 || b >= 8) continue;
            ss = s;
            swap(ss[a], ss[b]);
            if(memo.find(ss) != memo.end()) continue;
            que.push(ss); memo[ss] = memo[s] + 1;
        }
    }
        
    string str(8, ' ');
    while(cin >> str[0]) {
        for(int i = 1; i < 8; i++) cin >> str[i];
        cout << memo[str] << endl;
    }
}