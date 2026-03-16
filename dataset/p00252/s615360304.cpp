#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
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
    string s;
    getline(cin, s);

    if(s == "1 1 0" || s == "0 0 1")
        cout << "Open" << endl;
    else
        cout << "Close" << endl;

    return 0;
}