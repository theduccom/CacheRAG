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

int main(){
    int n;
    while(1){
        cin >> n;
        if(n==0) break;
        vector<int> V(10,0);
        rep(i,n){
            int tmp;
            cin >> tmp;
            V[tmp]+=1;
        }
        rep(i,10){
            if(V[i]==0) cout << '-' << endl;
            else{
                rep(j,V[i]) cout << '*';
                cout << endl;
            }
        }
    }
    return 0;
}
