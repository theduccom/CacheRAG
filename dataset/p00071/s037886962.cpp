#include <iostream>
#include <vector>
#include <string>
const int MASU_SIZE = 8;
using namespace std;

void Bomb(vector<string>& masu, int sx, int sy) {
    if (sx < 0 || sx >= MASU_SIZE || sy < 0 || sy >= MASU_SIZE) {
        return;
    }

    for (int i = -3; i <= 3; i++) {
        if (sx+i >= 0 && sx+i < MASU_SIZE && masu[sy][sx+i] == '1') {
            masu[sy][sx+i] = '0';
            Bomb(masu, sx+i, sy);
        }
        if (sy+i >= 0 && sy+i < MASU_SIZE && masu[sy+i][sx] == '1') {
            masu[sy+i][sx] ='0';
            Bomb(masu, sx, sy+i);
        }
    }
}

int main(void) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        vector<string> masu;
        int sx, sy;
        for (int j = 0; j < MASU_SIZE; j++) {
            string s;
            cin >> s;
            masu.push_back(s);
        }
        cin >> sx >> sy; sx--; sy--;

        Bomb(masu, sx, sy);

        cout << "Data " << i << ":" << endl;
        for (auto j = 0; j < MASU_SIZE; j++) {
            cout << masu[j] << endl;
        }
    }

    return 0;
}