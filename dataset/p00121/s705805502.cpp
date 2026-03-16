#include<iostream>
#include<map>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

#define REP(var, i, j) for (int var=(i); var<(j); var++)

typedef pair<int, int> P;
typedef pair<string, P> PP;

map<string, int> solve(){
    map<string, int> d;
    queue<PP> que;
    string t;
    que.push(PP("01234567", P(0, 0)));
    while(que.size()){
        PP p = que.front();
        que.pop();
        string str = p.first;
        int n = p.second.first+1;
        int zero = p.second.second;
        d[str] = n;
        if (zero!=0 && zero!=4){
            t = str;
            swap(t[zero], t[zero-1]);
            if (!d[t]) que.push(PP(t, P(n, zero-1)));
        }
        if (zero!=3 && zero!=7){
            t = str;
            swap(t[zero], t[zero+1]);
            if (!d[t]) que.push(PP(t, P(n, zero+1)));
        }
        if (zero<4){
            t = str;
            swap(t[zero], t[zero+4]);
            if (!d[t]) que.push(PP(t, P(n, zero+4)));
        }
        if (zero>3){
            t = str;
            swap(t[zero], t[zero-4]);
            if (!d[t]) que.push(PP(t, P(n, zero-4)));
        }
    }
    return d;
}

int main(){
    map<string, int> d = solve();
    string str;

    while (getline(cin, str)){
        string t;
        REP(i, 0, str.size()){
            if(str[i]!=' '){
                t+=str[i];
            }
        }
        cout << d[t]-1 << endl;
    }
    return 0;
}
