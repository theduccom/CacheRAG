#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int n;
    
    while (true) {
        cin >> n;
        if (!n) {
            break;
        }
        vector<vector<int> > v(n + 1, vector<int>(n + 1, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v[i][n] += v[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v[n][i] += v[j][i];
            }
            v[n][n] += v[n][i];
        }
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < n + 1; j++) {
                cout << setw(5) << v[i][j];
            }
            cout << '\n';
        }
    }
}