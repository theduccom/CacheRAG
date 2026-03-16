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
#define INF 100000000
typedef long long ll;

int main(void) {
    int a, b;
    cin >> a >> b;
    while (1) {
//        if (a == 0 && b == 0) break;
        int flag = 0;
        for (int i = a; i <= b; i++) {
            if (i % 400 == 0) {
                cout << i << endl;
                flag = 1;
            } else if (i % 100 == 0) {
                /* do nothing */
            } else if (i % 4 == 0) {
                cout << i << endl;
                flag = 1;
            }
        }
        if (flag == 0) cout << "NA" << endl;
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cout << endl;
    }
    return 0;
}