
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>

using namespace std;
#define int long long int
const int INF = 1001001001001001LL;

int di[] = {-1, 0, 1, 0, -1, 1, 1, -1};
int dj[] = {0, 1, 0, -1, 1, 1, -1, -1};

signed main(){
    
    int hoge = 0;
    while(1){
        int a, b; cin >> a >> b;
        if(!a) break;

        if(hoge != 0) cout << endl;
        int cnt = 0;
        for(int x = a; x <= b; x++){
            if(x % 4 != 0) continue;
            if(x % 100 == 0 && x % 400 != 0) continue;
            cout << x << endl;
            cnt++;
        }

        if(cnt == 0) cout << "NA" << endl;
        hoge++;
    }   
    return 0;
}

