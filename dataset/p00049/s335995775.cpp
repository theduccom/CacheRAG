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
    string blood[] = {"A", "B", "AB", "O"};
    vector<int> num(4, 0);

    for(;;){
        int tmp;
        char c;
        string s;
        if(!(cin >> tmp >> c >> s))
            break;

        int i = find(blood, blood+4, s) - blood;
        ++ num[i];
    }

    for(int i=0; i<4; ++i)
        cout << num[i] << endl;
    return 0;
}