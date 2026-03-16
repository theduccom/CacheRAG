#include <iostream>
#include <map>

using namespace std;

map<int, int> dist;

int main() {
    int n;
    while (cin >> n) {
        dist.clear();
        if (n == 0) break;
        int p, d1, d2;
        for (int i = 0; i < n; i++) {
            cin >> p >> d1 >> d2;
            dist[p] = d1 + d2;
        }
        int max = 0, max_p;
        for (map<int, int>::iterator m = dist.begin(); m != dist.end(); m++) {
            if ((*m).second > max) {
                max = (*m).second;
                max_p = (*m).first;
            }
        }
        cout << max_p << ' ' << max << endl;
    }
    return 0;
}