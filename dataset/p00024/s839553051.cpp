#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    double v;
    while(cin>>v) {
        double t = v / 9.8;
        double y = 4.9 * t * t;
        double n = (y+5) / 5;
        printf("%d\n", (int)(n + 1));
    }

    return 0;
}