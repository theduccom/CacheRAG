#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <cassert>
using namespace std;
using ll = long long;
const int INF = 1<<30;
const int MOD = 1e9 + 7;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
        if(s.substr(i, 5) == "apple")
        {
            cout << "peach";
            i += 4;
        }
        else if(s.substr(i, 5) == "peach")
        {
            cout << "apple";
            i += 4;
        }
        else cout << s[i];
    }
    cout << endl;
    return 0;
}


