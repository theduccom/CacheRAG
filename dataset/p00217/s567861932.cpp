#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;
        if(!n) break;

        vector<pair<int, int> > ary(n);
        for(int i = 0;i < n;i++){
            int p, d1, d2;
            cin >> p >> d1 >> d2;
            ary.push_back(pair<int, int>(d1 + d2, p));
        }
        sort(ary.begin(), ary.end());
        pair<int, int> ans = ary.back();
        cout << ans.second << ' ' << ans.first << endl;
    }
    return 0;
}