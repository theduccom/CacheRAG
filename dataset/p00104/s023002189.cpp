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
    for(;;){
        int h, w;
        cin >> h >> w;
        if(h == 0)
            return 0;

        vector<string> tile(h);
        for(int i=0; i<h; ++i)
            cin >> tile[i];

        vector<vector<bool> > check(h, vector<bool>(w, false));
        int y = 0;
        int x = 0;
        for(;;){
            char c = tile[y][x];
            if(c == '.'){
                cout << x << ' ' << y << endl;
                break;
            }
            check[y][x] = true;
            if(c == '>')
                ++ x;
            else if(c == '<')
                -- x;
            else if(c == 'v')
                ++ y;
            else
                -- y;
            if(check[y][x]){
                cout << "LOOP" << endl;
                break;
            }
        }
    }
}