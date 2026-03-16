#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int last_month = 4280;
    int w;
    while (cin >> w, 0 <= w) {
        int rate = 1150;
        if (30 < w) rate += (w - 30) * 160;
        if (20 < w) rate += min(10, (w - 20)) * 140;
        if (10 < w) rate += min(10, (w - 10)) * 125;
        cout << last_month - rate << endl;
    }
    return 0;
}