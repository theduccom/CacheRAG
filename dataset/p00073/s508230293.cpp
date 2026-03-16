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
        int x, h;
        cin >> x >> h;
        if(x == 0)
            return 0;

        double y = sqrt(h*h + x*x/4.0);
        double s = x * x + (x * y) * 2;
        printf("%.10f\n", s);
    }
}