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
        int x[3];
        for(int i=0; i<3; ++i)
            cin >> x[i];
        if(x[0] == 0)
            return 0;
        sort(x, x+3);

        int n;
        cin >> n;

        while(--n >= 0){
            int r;
            cin >> r;
            if(4*r*r - x[0]*x[0] - x[1]*x[1] > 0)
                cout << "OK" << endl;
            else
                cout << "NA" << endl;
        }
    }
}