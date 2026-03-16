#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    vector<vector<int> > paper(10, vector<int>(10, 0));
    int ret1 = 100;
    int ret2 = 0;

    int dy[] = {0, 1, -1, 0, 0, 1, -1, 1, -1, 2, -2, 0, 0};
    int dx[] = {0, 0, 0, 1, -1, 1, 1, -1, -1, 0, 0, 2, -2};

    for(;;){
        int x0, y0, size;
        char c;
        if(!(cin >> x0 >> c >> y0 >> c >> size))
            break;
        for(int i=0; i<4*size+1; ++i){
            int y = y0 + dy[i];
            int x = x0 + dx[i];
            if(y < 0 || y > 9 || x < 0 || x > 9)
                continue;
            if(paper[y][x] == 0)
                -- ret1;
            ++ paper[y][x];
            ret2 = max(ret2, paper[y][x]);
        }
    }

    cout << ret1 << endl << ret2 << endl;
}