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
    int n;
    cin >> n;
    while(n-- > 0){
        double xa, ya, ra, xb, yb, rb;
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        double len = sqrt(pow(xa-xb, 2.0) + pow(ya-yb, 2.0));

        if(len > ra + rb)
            cout << 0 << endl;
        else if(len >= abs(ra - rb))
            cout << 1 << endl;
        else if(ra > rb)
            cout << 2 << endl;
        else
            cout << -2 << endl;
    }
    return 0;
}