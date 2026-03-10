#include <bits/stdc++.h>
using namespace std;

#define REP(i, x) for (int i = 0; i < (int)(x); i++)
#define REPS(i, x) for (int i = 1; i <= (int)(x); i++)

int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    REPS(i, 9)
    {
        REPS(j, 9)
        {
            cout << i << "x" << j << "=" << i * j << endl;
        }
    }

    return 0;
}
