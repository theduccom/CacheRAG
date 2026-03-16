#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstring>
#include <utility>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#define debug(x) cerr << #x << ':' << x << endl
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define ALL(c) (c).begin(), (c).end()
using namespace std;
typedef long long ll;

int T(char x){
    if(x=='A') return 0;
    if(x=='B') return 1;
    if(x=='C') return 2;
}
char P(int x){
    if(x==0) return 'A';
    if(x==1) return 'B';
    if(x==2) return 'C';
}

int main(){
    int X[3]={1, 0, 0};
    char a, b;
    char x;
    while(cin >> a && cin >> x &&  cin >> b){
        int tmp;
        tmp = X[T(a)];
        X[T(a)]=X[T(b)];
        X[T(b)]=tmp;
    }
    rep(i,3){
        
        if(X[i]==1){
            char a = P(i);
            cout << a << endl;
        } 
    }
    return 0;
}
