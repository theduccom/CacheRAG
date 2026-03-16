#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
#define INF (1 << 30)
using namespace std;

const int kN = 1000000;

void primeNumber(bool prime[kN], vector<long long> &p){
    rep(i,kN) prime[i] = 1;
    prime[0] = prime[1] = 0;
    rep(i,kN){
        if(prime[i]){
            if(p.size() >= 1) p.push_back(p[p.size() - 1] + i);
            else p.push_back(i);
            for(int j = i + i; j < kN; j+=i){
                prime[j] = 0;
            }
        }
    }
}

int main(){
    bool prime[kN];
    vector<long long> p;
    primeNumber(prime, p);

    int n;
    while(cin >> n, n){
        cout << p[n - 1] << endl;
    }
}