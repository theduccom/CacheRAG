#include <iostream>
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
#include <functional>
#include <bitset>

using namespace std;


signed main(){
    
    while(1){
        int n; cin >> n;
        if(n == 0) break;

        vector<pair<int, int>> vec(n);
        for(int i = 0; i < n; i++){
            int a, b, c; cin >> a >> b >> c;
            vec[i] = {b + c, a};
        }

        sort(vec.rbegin(), vec.rend());
        cout << vec[0].second << " " << vec[0].first << endl;
    }
    return 0;
}

