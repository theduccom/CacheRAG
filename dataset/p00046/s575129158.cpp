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
    double hMin = INT_MAX;
    double hMax = INT_MIN;

    for(;;){
        double n;
        if(!(cin >> n))
            break;

        hMin = min(hMin, n);
        hMax = max(hMax, n);
    }

    printf("%.10f\n", hMax - hMin);
    return 0;
}