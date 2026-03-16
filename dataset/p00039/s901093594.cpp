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
    int c[256];
    c['I'] = 1;
    c['V'] = 5;
    c['X'] = 10;
    c['L'] = 50;
    c['C'] = 100;
    c['D'] = 500;
    c['M'] = 1000;

    for(;;){
        string s;
        if(!(cin >> s))
            return 0;

        int n = s.size();
        int ret = 0;
        for(int i=0; i<n; ++i){
            if(i+1 < n && c[s[i]] < c[s[i+1]])
                ret -= c[s[i]];
            else
                ret += c[s[i]];
        }
        cout << ret << endl;
    }
}