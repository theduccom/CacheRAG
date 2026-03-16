#include <iostream>

using namespace std;

int main() {
    while(true) {
        int N;
        cin >> N;
        if(!N) break;
        int cnt = 0;
        for(int i = 1; i <= N; ++i) {
            int n = i;
            while(n > 0 && n % 5 == 0) {
                ++cnt;
                n /= 5;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}