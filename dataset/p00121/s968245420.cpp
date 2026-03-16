#include <bits/stdc++.h>
using namespace std;

map<string, int> dp;
const int cd[] = {-1, 1, 4, -4};
void dfs(){
    dp["01234567"] = 0;
    queue<string> que;
    que.push("01234567");
    while(!que.empty()){
        string str = que.front();
        que.pop();
        int zpos = 0;
        for(int i = 0; str[i]; ++i)
            if(str[i] == '0'){
                zpos = i;
                break;
            }
        for(int i = 0; i < 4; ++i){
            int npos = zpos + cd[i];
            if(npos < 0 || 7 < npos || (zpos == 3 && cd[i] == 1) || (zpos == 4 && cd[i] == -1)) continue;
            string nstr = str;
            swap(nstr[zpos], nstr[npos]);
            if(dp.find(nstr) == dp.end()){
                dp[nstr] = dp[str] + 1;
                que.push(nstr);
            }
        }
    }
}

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    dfs();
    string str;
    while(getline(cin, str)){
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        cout << dp[str] << endl;
    }
    return 0;
}