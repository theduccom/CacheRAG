#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a, b;
    bool first = true;
    while (cin >> a >> b, a) {
        vector<int> res;
        for (int i=a; i<=b; ++i) {
            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
                res.push_back(i);
            }
        }
        if (first) {
            first = false;
        } else {
            cout << endl;
        }
        if (res.empty()) {
            cout << "NA" << endl;
        } else {
            for (int i=0; i<(int)res.size(); ++i) {
                cout << res[i] << endl;
            }
        }
    }
    return 0;
}