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
    double x = 0;
    double y = 0;
    int dir = 90;
    double PI = acos(-1.0);

    for(;;){
        int m, r;
        char c;
        cin >> m >> c >> r;
        if(m == 0)
            break;

        x += m * cos(dir * PI / 180);
        y += m * sin(dir * PI / 180);
        dir -= r;
    }

    cout << (int)x << endl << (int)y << endl;
}