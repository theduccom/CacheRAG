#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    for(;;){
        int n;
        cin >> n;
        if(n == 0)
            return 0;

        pair<int, int> ret(-1, -1);
        for(int i=0; i<n; ++i){
            int p, d1, d2;
            cin >> p >> d1 >> d2;
            ret = max(ret, make_pair(d1 + d2, p));
        }
        cout << ret.second << ' ' << ret.first << endl;
    }
}