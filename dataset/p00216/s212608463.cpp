#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    int water[] = {10, 20, 30, INT_MAX};
    int value[] = {125, 140, 160};

    for(;;){
        int w;
        cin >> w;
        if(w == -1)
            return 0;

        int ret = 1150;
        for(int i=0; i<3; ++i){
            if(w > water[i]){
                ret += (min(water[i+1], w) - water[i]) * value[i];
            }
        }
        cout << (4280 - ret) << endl;
    }
}