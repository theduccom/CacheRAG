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

    for(;;){
        vector<string> s(14);
        s[0] = s[13] = string(14, '0');
        for(int i=0; i<12; ++i){
            if(!(cin >> s[i+1]))
                return 0;
            s[i+1] = '0' + s[i+1] + '0';
        }

        vector<vector<bool> > check(14, vector<bool>(14, false));
        int ret = 0;
        for(int i=1; i<=12; ++i){
            for(int j=1; j<=12; ++j){
                if(s[i][j] == '0' || check[i][j])
                    continue;
                ++ ret;
                queue<pair<int, int> > q;
                q.push(make_pair(i, j));
                check[i][j] = true;
                while(!q.empty()){
                    int y0 = q.front().first;
                    int x0 = q.front().second;
                    q.pop();
                    for(int k=0; k<4; ++k){
                        int y = y0 + dy[k];
                        int x = x0 + dx[k];
                        if(s[y][x] == '1' && !check[y][x]){
                            q.push(make_pair(y, x));
                            check[y][x] = true;
                        }
                    }
                }
            }
        }
        cout << ret << endl;
    }
}