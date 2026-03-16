//y12-2
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string>
#include <tuple>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <stack>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <random>
#include <cassert>
using namespace std;
#define LL long long
#undef INT_MIN
#undef INT_MAX
#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define LL_MIN -9223372036854775808
#define LL_MAX 9223372036854775807
#define segment_size 65536
#define ROOP() while (true)

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    a = 100 * a + 10 * b + c;
    switch(a){
        case 100:
        cout << "Close" << endl;
        break;
        case 10:
        cout << "Close" << endl;
        break;
        case 110:
        cout << "Open" << endl;
        break;
        case 1:
        cout << "Open" << endl;
        break;
        case 0:
        cout << "Close" << endl;
        break;
    }

    return 0;
}
