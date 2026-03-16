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
        vector<string> s(8);
        for(int i=0; i<8; ++i){
            if(!(cin >> s[i]))
                return 0;
        }

        int dy[] = {3, 0, 2, 1, 2, 1};
        int dx[] = {0, 3, -1, 2, 1, -1};

        bool ok = false;
        for(int i=0; i<8; ++i){
            for(int j=0; j<8; ++j){
                if(ok || s[i][j] == '0')
                    continue;
                for(int k=0; k<6; ++k){
                    if(i+dy[k] < 8 && 0 <= j+dx[k] && j+dx[k] < 8 && s[i+dy[k]][j+dx[k]] == '1'){
                        cout << (char)('B' + k) << endl;
                        ok = true;
                        break;
                    }
                }
                if(!ok){
                    cout << 'A' << endl;
                    ok = true;
                }
            }
        }
    }
}