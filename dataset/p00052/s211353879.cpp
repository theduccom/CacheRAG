#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    typedef unsigned long long ull;
    ull n;
    while (cin >> n, n){
        ull _5 = 0, _2 = 0;
        for (ull i = 2; i <= n; i++){
            ull t = i;
            while (t % 2 == 0)_2++, t /= 2;
            while (t % 5 == 0)_5++, t /= 5;
        }
        cout << min(_2, _5) << endl;
    }
}