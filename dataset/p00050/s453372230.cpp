#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <stack>
#include <iomanip>
#include <numeric>
#include <queue>
#include <climits>
#include <complex>
#include <cmath>
#include <map>
using namespace std;
using ll = long long;
#define MOD 1000000007
#define INF 1LL << 59

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    //cout << fixed << setprecision(3);

    string s = "";
    getline(cin, s);

    int n = s.size();
    for (int i = 0; i < n - 4; ++i)
    {
        string t = s.substr(i, 5);
        if (t == "apple")
            s.replace(s.begin() + i, s.begin() + i + 5, "peach");
        if (t == "peach")
            s.replace(s.begin() + i, s.begin() + i + 5, "apple");
    }
    cout << s << endl;
    return 0;
}
