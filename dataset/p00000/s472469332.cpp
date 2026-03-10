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
    for(int i=1; i<=9; ++i)
        for(int j=1; j<=9; ++j)
            cout << i << 'x' << j << '=' << (i*j) << endl;
}