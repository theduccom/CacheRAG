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
    for(;;){
        int w;
        if(!(cin >> w))
            return 0;

        int tmp = 1;
        bool first = true;
        while(w > 0){
            if(w % 2 == 1){
                if(first)
                    first = false;
                else
                    cout << ' ';
                cout << tmp;
            }
            w /= 2;
            tmp *= 2;
        }
        cout << endl;
    }
}