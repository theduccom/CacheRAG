#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, init, n) for(int i = init; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to, cost;
};

const int MOD = 1e9 + 7;
const int iINF = 1e9;
const long long int llINF = 1e18;
const double PI = acos(-1.0);

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

bool isPrime[10010];

void Prime()
{
    rep(i, 10010) isPrime[i] = true;

    isPrime[0] = false;
    isPrime[1] = false;

    for(int i = 2; i <= sqrt(10010); i ++)
    {
        if(isPrime[i])
        {
            for(int j = i * 2; j <= 10010; j += i)
                isPrime[j] = false;
        }
    }
}

int main()
{
    Prime();

    int N;
    while(cin >> N, N)
    {
        for(int i = N; 0 < i; i--)
        {
            if(isPrime[i] && isPrime[i - 2])
            {
                cout << i - 2<< " " << i << endl;
                break;
            }
        }   
    }

    return 0;
}
