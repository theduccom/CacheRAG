#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int w;
    while(cin >> w && w != -1){

        const int lastmonth = 4280;
        int ans = 1150;
        if(w <= 10);
        else if(w <= 20){
            ans += (w - 10) * 125;
        }
        else if(w <= 30){
            ans += 10 * 125;
            ans += (w - 20) * 140;
        }
        else {
            ans += 10 * 125 + 10 * 140;
            ans += (w - 30) * 160;
        }

        cout << lastmonth - ans << endl;
    }

   return 0;
}