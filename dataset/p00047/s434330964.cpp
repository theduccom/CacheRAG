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
    char ret = 'A';

    for(;;){
        string s;
        if(!(cin >> s))
            break;

        if(ret == s[0])
            ret = s[2];
        else if(ret == s[2])
            ret = s[0];
    }

    cout << ret << endl;
    return 0;
}