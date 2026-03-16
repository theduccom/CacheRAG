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
    int k = 0;
    for(;;){
        int w, n;
        cin >> w >> n;
        if(w == 0)
            return 0;

        vector<int> price(w+1, -1);
        price[0] = 0;
        for(int i=0; i<n; ++i){
            int a, b;
            char c;
            cin >> a >> c >> b;
            for(int j=w-b; j>=0; --j){
                if(price[j] != -1)
                    price[j+b] = max(price[j+b], price[j] + a);
            }
        }

        int ret1 = 0, ret2;
        for(int i=0; i<=w; ++i){
            if(price[i] > ret1){
                ret1 = price[i];
                ret2 = i;
            }
        }
        cout << "Case " << (++k) << ':' << endl;
        cout << ret1 << endl << ret2 << endl;
    }
}