#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    while(cin >> n && n){
        int ans1 = 0;
        int ans2 = 0;
        for(int i = 0; i < n; ++i){
            int num;
            int d1, d2;
            cin >> num >> d1 >> d2;
            int d = d1 + d2;
            if(ans2 < d){
                ans1 = num;
                ans2 = d;
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }

   return 0;
}