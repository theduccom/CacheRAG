#include <iostream>
#define rep(i, a, n) for(int i = a; i < n; i++)
using namespace std;

int main(){
    double v;
    while(cin >> v){
        double t = v / 9.8;
        double y = t * t * 4.9;
        int ans = 0;
        rep(i, 1, 600){
            double h = 5 * (i - 1);
            if(h > y){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}