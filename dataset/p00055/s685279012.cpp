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
        vector<double> a(10);
        if(!(cin >> a[0]))
            return 0;

        for(int i=1; i<10; ++i){
            if(i % 2 == 1)
                a[i] = a[i-1] * 2;
            else
                a[i] = a[i-1] / 3;
        }

        printf("%.10f\n", accumulate(a.begin(), a.end(), 0.0));
    }
}