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

vector<string> v;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    //cout << fixed << setprecision(3);

    int a, b, c, d, e;
    while (scanf("%d,%d,%d,%d,%d", &a, &b, &c, &d, &e) != EOF)
    {
        int arr[14];
        for (int i = 0; i < 14; ++i)
            arr[i] = 0;

        arr[a]++;
        arr[b]++;
        arr[c]++;
        arr[d]++;
        arr[e]++;

        bool checked = false;
        for (int i = 1; i <= 13; ++i)
        {
            if (arr[i] == 4)
            {
                cout << "four card" << endl;
                checked = true;
            }
        }
        if (checked)
            continue;

        bool two = false, two2 = false, three = false;
        for (int i = 1; i <= 13; ++i)
        {
            if (two == true && arr[i] == 2)
                two2 = true;
            if (arr[i] == 2)
                two = true;

            if (arr[i] == 3)
                three = true;
        }
        if (two && three)
        {
            cout << "full house" << endl;
            checked = true;
        }
        if (checked)
            continue;

        bool str = false;

        for (int i = 1; i <= 13 - 4; ++i)
        {
            if (arr[i] == 1 && arr[i + 1] == 1 && arr[i + 2] == 1 && arr[i + 3] == 1 && arr[i + 4] == 1)
                str = true;
        }

        if (str == true || (arr[1] == 1 && arr[1] == arr[2] && arr[2] == arr[3] && arr[3] == arr[4] && arr[4] == arr[5]) || (arr[1] == 1 && arr[1] == arr[10] && arr[10] == arr[11] && arr[11] == arr[12] && arr[12] == arr[13]))
        {
            cout << "straight" << endl;
            checked = true;
        }

        if (checked)
            continue;

        if (three)
        {
            cout << "three card" << endl;
            checked = true;
        }
        if (checked)
            continue;

        if (two && two2)
        {
            cout << "two pair" << endl;
            checked = true;
        }
        if (checked)
            continue;

        if (two)
        {
            cout << "one pair" << endl;
            checked = true;
        }
        if (checked)
            continue;

        cout << "null" << endl;
    }
    return 0;
}
