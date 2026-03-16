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
    int ret1 = 0;
    int ret2 = 0;

    for(;;){
        int x, y, z;
        char c;
        if(!(cin >> x >> c >> y >> c >> z))
            break;
        if(x * x + y * y == z * z)
            ++ ret1;
        else if(x == y)
            ++ ret2;
    }

    cout << ret1 << endl << ret2 << endl;
}