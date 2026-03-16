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
        double v;
        if(!(cin >> v))
            return 0;

        double t = v / 9.8;
        double y = 4.9 * t * t;
        int ret = y / 5 + 2;
        cout << ret << endl;
    }
}