#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int h, w;

    while (cin >> h >> w, h || w) {
        vector<string> map(h);
        vector<vector<bool> > memo(h, vector<bool>(w));

        for (int i = 0; i < h; i++) {
            cin >> map[i];
            for (int j = 0; j < w; j++)
                memo[i][j] = false;
        }

        int x, y;
        x = y = 0;
        while (true) {
            if (memo[y][x]) {
                cout << "LOOP" << endl;
                break;
            }
            memo[y][x] = true;
            if (map[y][x] == '.') {
                cout << x << " " << y << endl;
                break;
            }
            
            if (map[y][x] == '>') 
                x++;
            else if (map[y][x] == '<')
                x--;
            else if (map[y][x] == 'v')
                y++;
            else
                y--;
        }
    }

    return 0;
}