#include <iostream>
using namespace std;

int l[10];
int v1, v2;

void solve(void)
{
    int s = 0;
    int i;
    for (i = 0; i < 10; i++) s += l[i];
    double meet_point = (double)s / (double)(v1 + v2) * v1;
    int v1_run = 0;
    i = 0;
    while (v1_run < meet_point) {
        v1_run += l[i++];
    }
    cout << i << endl;
}

int main(void)
{
    char c;
    while (cin >> l[0] >> c >> l[1] >> c >> l[2] >> c 
               >> l[3] >> c >> l[4] >> c >> l[5] >> c
               >> l[6] >> c >> l[7] >> c >> l[8] >> c
               >> l[9] >> c >>  v1  >> c >> v2) {
        solve();
    }
    return 0;
}