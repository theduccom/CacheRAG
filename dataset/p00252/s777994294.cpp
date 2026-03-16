#include <bits/stdc++.h>

using namespace std;
using i64 = int64_t;

signed main(){
    
    vector<int> b(3);
    for(auto& x : b)
        cin >> x;
    if((b[0] && b[1] && !b[2]) || (!b[0] && !b[1] && b[2]))
        cout << "Open" << endl;
    else
        cout << "Close" << endl;
    
    
    return 0;
}
