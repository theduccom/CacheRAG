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
    string s;
    getline(cin, s);

    int i = 0;
    for(;;){
        int j = s.find("apple", i);
        int k = s.find("peach", i);
        if(j == string::npos && k == string::npos)
            break;
        if(k == string::npos || (j != string::npos && j < k)){
            s.replace(j, 5, "peach");
            i = j + 5;
        }else{
            s.replace(k, 5, "apple");
            i = k + 5;
        }
    }

    cout << s << endl;
    return 0;
}