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
    int dy[] = {0, 0, 1, -1};
    int dx[] = {1, -1, 0, 0};

    int n;
    cin >> n;

    for(int i=1; i<=n; ++i){
        vector<string> plane(8);
        for(int j=0; j<8; ++j)
            cin >> plane[j];

        int y, x;
        cin >> x >> y;
        -- y;
        -- x;
        plane[y][x] = '0';
        queue<pair<int, int> > q;
        q.push(make_pair(y, x));
        while(!q.empty()){
            y = q.front().first;
            x = q.front().second;
            q.pop();
            for(int j=0; j<4; ++j){
                for(int k=1; k<=3; ++k){
                    int y1 = y + dy[j] * k;
                    int x1 = x + dx[j] * k;
                    if(0 <= y1 && y1 < 8 && 0 <= x1 && x1 < 8 && plane[y1][x1] == '1'){
                        plane[y1][x1] = '0';
                        q.push(make_pair(y1, x1));
                    }
                }
            }
        }

        cout << "Data " << i << ':' << endl;
        for(int j=0; j<8; ++j)
            cout << plane[j] << endl;
    }
}