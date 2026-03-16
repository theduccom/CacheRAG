#include <iostream>
using namespace std;
char judge_class(int, int, int);

int main(void)
{
    int pm, pe, pj, n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; i++) {
            cin >> pm >> pe >> pj;
            cout << judge_class(pm, pe, pj) << endl;
        }
    }
    return 0;
}

char judge_class(int pm, int pe, int pj)
{
    if (pm == 100 || pe == 100 || pj == 100) {
        return 'A';
    } else if (pm + pe >= 90 * 2) {
        return 'A';
    } else if (pm + pe + pj >= 80 * 3) {
        return 'A';
    } else if (pm + pe + pj >= 70 * 3) {
        return 'B';
    } else if ((pm + pe + pj >= 50 * 3) && ((pm >= 80) || (pe >= 80))) {
        return 'B';
    } else {
        return 'C';
    }
}