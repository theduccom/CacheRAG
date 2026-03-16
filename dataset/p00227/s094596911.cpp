#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

int main()
{
    int n, m;

    while (cin >> n >> m, n || m) {
        vector<int> p(n);
        int sum = 0;

        for (int i = 0; i < n; i++)
            cin >> p[i];

        sort(p.begin(), p.end(), greater<int>());
        
        for (int i = 0; i < n; i += m) {
            for (int j = 0; j < m - 1; j++) {
                if (i + j > n - 1)
                    break;
                sum += p[i + j];
            }
        }
        cout << sum << endl;
    }

    return 0;
}