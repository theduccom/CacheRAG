#include <iostream>
#include <cstring>
#include <algorithm>
#include <numeric>
using namespace std;
#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,n) loop(i,0,n)

const int MAX_N = 104729;
int p[(MAX_N + 1) / 2];
bool isp[MAX_N + 1];
int f(){
    memset(isp, 1, sizeof(isp));
    isp[0] = isp[1] = false;
    int idx = 0;
    loop(i, 2, MAX_N + 1){
        if (!isp[i]) continue;
        p[idx++] = i;
        for (int j = i + i; j <= MAX_N; j += i){
            isp[j] = false;
        }
    }
    return idx;
}

int main(){
    int n;
    f();
    while (cin >> n, n){
        long sum = accumulate(p, p + n, 0);
        cout << sum << endl;
    }
}