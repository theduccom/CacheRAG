#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    int val[1001], W, N, v, w, caseNo = 1;
    char c;
    while (cin >> W, W) {
        memset(val, -1, sizeof val);
        val[0] = 0;
        cin >> N;
        for (int i=0; i<N; ++i) {
            cin >> v >> c >> w;
            for (int j=W; j>=0; --j) {
                if (0 <= val[j] && j + w <= W) {
                    val[j + w] = max(val[j + w], val[j] + v);
                }
            }
        }
        int maxv = 0, maxw = 0;
        for (int i=0; i<=W; ++i) {
            if (maxv < val[i]) {
                maxv = val[i];
                maxw = i;
            }
        }
        cout << "Case " << caseNo << ":" << endl;
        cout << maxv << endl;
        cout << maxw << endl;
        ++ caseNo;
    }
    return 0;
}