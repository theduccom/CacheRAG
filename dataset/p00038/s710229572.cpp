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
#include <queue>
#include <map>
using namespace std;
typedef long long ll;
const int INF = 1<<30; 
const int MOD = 1e9 + 7;
const int dy[] = {1, 0, -1, 0};
const int dx[] = {0, 1, 0, -1};
int main()
{
    int a[5];
    char t;
    while(cin >> a[0] >> t >> a[1] >> t >> a[2] >> t >> a[3] >> t >> a[4])
    {
        sort(a,a+5);
        if(a[0] == a[3] || a[1] == a[4])
        {
            cout << "four card" << endl;
        }
        else if((a[0] == a[1] && a[2] == a[4]) || (a[0] == a[2] && a[3] == a[4]))
        {
            cout << "full house" << endl;
        }
        else if((a[0]+1==a[1]&&a[1]+1==a[2]&&a[2]+1==a[3]&&a[3]+1==a[4]) || (a[0]==1&&a[1]==10&&a[2]==11&&a[3]==12&&a[4]==13))
        {
            cout << "straight" << endl;
        }
        else if(a[0] == a[2] || a[1] == a[3] || a[2] == a[4])
        {
            cout << "three card" << endl;
        }
        else if((a[0]==a[1]&&(a[2]==a[3]||a[3]==a[4]))||(a[1]==a[2]&&a[3]==a[4]))
        {
            cout << "two pair" << endl;
        }
        else if((a[0]==a[1])||(a[1]==a[2])||(a[2]==a[3])||(a[3]==a[4]))
        {
            cout << "one pair" << endl;
        }
        else
        {
            cout << "null" << endl;
        }
    }
    return 0;
}


