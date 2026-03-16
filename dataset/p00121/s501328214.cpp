
#include <algorithm>
#include <iostream>
#include <string.h>
#include <map>
#include <queue>

using namespace std;

#define int_ int64_t
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned ll
#define db double
#define lb long double
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PII pair<int, int>

ll a;
map<string,ll> res;

int main()
{
    string s="01234567";
    queue<string> q;
    q.push(s);
    res[s]=1;
    while (!q.empty()) {
        string cur=q.front();
        q.pop();
        ll idx=0;
        for (ll i=0;i<8;i++) {
            if (cur[i]=='0') {
                idx=i;
                break;
            }
        }
        if (idx!=0&&idx!=4) {
            string tmp=cur;
            swap(tmp[idx],tmp[idx-1]);
            if (res[tmp]==0) {
                q.push(tmp);
                res[tmp]=res[cur]+1;
            }
        }
        if (idx!=3&&idx!=7) {
            string tmp=cur;
            swap(tmp[idx],tmp[idx+1]);
            if (res[tmp]==0) {
                q.push(tmp);
                res[tmp]=res[cur]+1;
            }
        }
        if (idx<4) {
            string tmp=cur;
            swap(tmp[idx],tmp[idx+4]);
            if (res[tmp]==0) {
                q.push(tmp);
                res[tmp]=res[cur]+1;
            }
        }
        if (idx>=4) {
            string tmp=cur;
            swap(tmp[idx],tmp[idx-4]);
            if (res[tmp]==0) {
                q.push(tmp);
                res[tmp]=res[cur]+1;
            }
        }
    }
    while (true) {
        string t;
        for (ll i=0;i<8;i++) {
            if (!(cin >> a)) return 0;
            t+=a+'0';
        }
        printf("%lld\n",res[t]-1);
    }
}
