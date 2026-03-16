#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define PI 3.141592
int main(void) {
    double x = 0, y = 0, theta = 0;
    while (1) {
        int d, dir;
        scanf("%d,%d", &d, &dir);
        if (d == 0 && dir == 0) break;
        y += cos((PI * theta) / 180) * d;
        x += sin((PI * theta) / 180) * d;
        theta = (theta + dir);
    }
    cout << (int)(x) << endl;
    cout << (int)(y) << endl;
    return 0;
}