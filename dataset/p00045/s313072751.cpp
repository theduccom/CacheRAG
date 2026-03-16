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
    int n = 0;
    int x = 0;
    int y = 0;

    for(;;){
        int a, b;
        char c;
        if(!(cin >> a >> c >> b))
            break;

        ++ n;
        x += a * b;
        y += b;
    }

    cout << x << endl;
    cout << (y+n/2)/n << endl;
    return 0;
}