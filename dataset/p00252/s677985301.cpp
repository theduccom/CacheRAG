#include <vector>
#include <iostream>
#include <set>
#include <cstdio>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <algorithm>
#include <algorithm>
#include <limits>
#include <map>

using namespace std;
typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = a*4+b*2+c;
    if (d == 1 || d == 6) {
        cout << "Open" << endl;
    } else {
        cout << "Close" << endl;
    }
    return 0;
}