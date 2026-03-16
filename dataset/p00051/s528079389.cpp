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

    while(--n >= 0){
        string s;
        cin >> s;

        sort(s.rbegin(), s.rend());
        int ret = atoi(s.c_str());
        sort(s.begin(), s.end());
        ret -= atoi(s.c_str());
        cout << ret << endl;
    }
}