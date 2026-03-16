#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, s;
    char c;
    vector<vector<int>> v(14, vector<int>(14, 0));
    while (cin >> x >> c >> y >> c >> s) {
        x += 2; y += 2;
        switch (s) {
            case 3:
                v[x][y-2]++; v[x][y+2]++;
                v[x-2][y]++; v[x+2][y]++;
            case 2:
                v[x-1][y-1]++; v[x-1][y+1]++;
                v[x+1][y-1]++; v[x+1][y+1]++;
            case 1:
                v[x+1][y]++; v[x-1][y]++;
                v[x][y-1]++; v[x][y+1]++;
                v[x][y]++;
                break;
        }
    }
    
    int mx = 0, cnt = 0;
    for (int i = 2; i < 12; i++) {
        for (int j = 2; j < 12; j++) {
            mx = max(mx, v[i][j]);
            if (v[i][j] == 0) cnt++;
        }
    }
    cout << cnt << "\n" << mx << endl;
    return 0;
}