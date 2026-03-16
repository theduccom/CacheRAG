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
    int ret = 0;
    for(;;){
        string s;
        if(!(cin >> s)){
            cout << ret << endl;
            return 0;
        }
        
        string s1 = s;
        reverse(s1.begin(), s1.end());
        if(s == s1)
            ++ ret;
    }
}