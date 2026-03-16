#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#include <complex>
#include <ctime>
#include <cassert>
#include <functional>
#include <list>
#include <bitset>
#include <cfenv>
#include <numeric>
#include <utility>
#include <cstdio>
#include <fstream>
#include <deque>
#include <limits>
#include <climits>
using namespace std;
typedef pair<int, int> ii;

int main() {
    ios::sync_with_stdio(false);

    string input, xS,yS, sizeS;
    int x, y, size;

    int grid[20][20];
    memset(grid, 0, sizeof(grid));

    while(getline(cin, input)) {

        // parse
        xS = input.substr(0, input.find_first_of(','));
        yS = input.substr(input.find_first_of(',') + 1, input.find_last_of(',') - input.find_first_of(','));
        sizeS = input.substr(input.find_last_of(',') + 1, input.size());

        stringstream parser;
        parser.str(xS);
        parser >> x;
        parser.clear();
        parser.str(yS);
        parser >> y;
        parser.clear();
        parser.str(sizeS);
        parser >> size;

        x += 5;
        y += 5;

        // simulate grid

        switch ( size ) {

                // large
            case 3: {
                // outer edges
                grid[x + 2][y]++;
                grid[x - 2][y]++;
                grid[x][y + 2]++;
                grid[x][y - 2]++;
            }
               //medium
            case 2: {

                // outer corners
                grid[x - 1][y - 1]++;
                grid[x + 1][y + 1]++;
                grid[x - 1][y + 1]++;
                grid[x + 1][y - 1]++;
            }
                // small
            case 1: {
                // cross shaped
                grid[x][y]++;
                grid[x - 1][y]++;
                grid[x + 1][y]++;
                grid[x][y - 1]++;
                grid[x][y + 1]++;
                break;
            }

        }
    }

    // find densest spot and number of clear spots
    int densest = 0;
    int clear = 0;

    for(int i = 5; i <= 14; i++) {
        for(int j = 5; j <= 14; j++) {
            if(grid[i][j] > densest)
                densest = grid[i][j];
            else if(grid[i][j] == 0)
                clear++;
        }
    }

    cout << clear << endl;
    cout << densest << endl;
    return 0;
}