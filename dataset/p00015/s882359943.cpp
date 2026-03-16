#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int main(){
    int test; cin >> test;
    rep(casenum, test){
        string a, b;
        cin >> a >> b;
        int n1 = a.size(), n2 = b.size();
        int n = max(n1, n2);
        if(n1 > 80 || n2 > 80){
            cout << "overflow" << endl;;
            continue;
        }
        if(n1 < n2){
            int sa = n2 - n1;
            string p = "";
            rep(i, sa) p += '0';
            a = p + a;
        }else if(n1 > n2){
            int sa = n1 - n2;
            string p = "";
            rep(i, sa) p += '0';
            b = p + b;
        }
        bool keta = false;
        string res = "";
        for(int i = n - 1; i >= 0; --i){
            int k = (a[i] - '0') + (b[i] - '0');
            if(keta) k++;
            if(k < 10){
                char temp = '0' + k;
                res = temp + res;
                keta = false;
            }else{
                char temp = '0' + (k - 10);
                res = temp + res;
                keta = true;
            }
        }
        if(keta) res = '1' + res;
        if(res.size() > 80){
            cout << "overflow" << endl;
            continue;
        }
        cout << res << endl;
    }
    return 0;
}