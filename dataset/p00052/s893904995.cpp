#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int N;
    while (cin >> N, N) {
        int res = 0;
        while (N > 0) {
            res += N /= 5;
        }
        cout << res << endl;
    }
    return 0;
}