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

int minDist(const vector<vector<int> >& plane, char road, int y1, int x1, int y2, int x2)
{
    int dy[] = {0, 0, -1, 1};
    int dx[] = {-1, 1, 0, 0};

    int h = plane.size();
    int w = plane[0].size();

    queue<pair<int, int> > q;
    vector<vector<bool> > check(h, vector<bool>(w, false));
    q.push(make_pair(y1, x1));
    check[y1][x1] = true;
    int ret = 0;
    while(!q.empty()){
        queue<pair<int, int> > q1;
        while(!q.empty()){
            int y = q.front().first;
            int x = q.front().second;
            q.pop();
            if(y == y2 && x == x2)
                return ret;
            for(int i=0; i<4; ++i){
                int y0 = y + dy[i];
                int x0 = x + dx[i];
                if(0 <= y0 && y0 < h && 0 <= x0 && x0 < w && plane[y0][x0] == road && !check[y0][x0]){
                    q1.push(make_pair(y0, x0));
                    check[y0][x0] = true;
                }
            }
        }
        ++ ret;
        q = q1;
    }
    return -1;
}

int main()
{
    for(;;){
        int w, h;
        cin >> w >> h;
        if(w == 0)
            return 0;

        int xs, ys, xg, yg;
        cin >> xs >> ys >> xg >> yg;

        int n;
        cin >> n;
        vector<vector<int> > grid(h+2, vector<int>(w+2, 0));
        for(int i=0; i<n; ++i){
            int c, d, x, y;
            cin >> c >> d >> x >> y;
            if(d == 0){
                for(int j=0; j<2; ++j){
                    for(int k=0; k<4; ++k){
                        grid[y+j][x+k] = c;
                    }
                }
            }else{
                for(int j=0; j<4; ++j){
                    for(int k=0; k<2; ++k){
                        grid[y+j][x+k] = c;
                    }
                }
            }
        }

        if(grid[ys][xs] != grid[yg][xg] || grid[ys][xs] == 0)
            cout << "NG" << endl;
        else if(minDist(grid, grid[ys][xs], ys, xs, yg, xg) == -1)
            cout << "NG" << endl;
        else
            cout << "OK" << endl;
    }
}