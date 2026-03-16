#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;
        if(n==0) break;
        vector<pair<int, int> > walk(n);
        for(int i=0; i<n; i++){
            int p,a,b;
            cin >> p >> a >> b;
            walk[i] = make_pair(a+b, p);
        }
        pair<int, int> ans = *max_element(walk.begin(), walk.end());
        cout << ans.second << " " << ans.first << endl;
    }
    return 0;
}

