#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for( int i = 0; i < n; i++ )
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define INF 2000000000
#define mod 1000000007
#define INF2 1000000000000000000

int main(void)
{
    int H, W; cin >> H >> W;
    do {
        char state[H][W];
        bool used[H][W] = {true};
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cin >> state[i][j];
                used[i][j] = true;
            }
        }

        int i = 0, j = 0;
        while (state[i][j] != '.' && used[i][j] == true) {
            used[i][j] = false;
            if (state[i][j] == '>') j++;
            else if (state[i][j] == '<') j--;
            else if (state[i][j] == '^') i--;
            else i++;

        }
        if (used[i][j] == false) cout << "LOOP" << endl;
        else cout << j << " " << i << endl;
        cin >> H >> W;
    } while (H != 0 && W != 0);
    return 0;

}