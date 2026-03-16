#include<iostream>
#include<vector>
using namespace std;

int n;

int main() {
    while(1) {
        cin >> n;
        if (n == 0) break;
        vector<int> hist(10, 0);
        for (int i = 0; i < n; ++i) {
            int c;
            cin >> c;
            hist[c]++;
        }
        for (auto cnti : hist) {
            for (int i = 0; i < cnti; ++i) {
                cout << "*";
            }
            if (cnti == 0) cout << "-";
            cout << endl;
        }
    }
    return 0;
}
