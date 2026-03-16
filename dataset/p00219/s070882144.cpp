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
        int n;
        cin >> n;
        if(n == 0)
            return 0;

        vector<int> num(10, 0);
        for(int i=0; i<n; ++i){
            int a;
            cin >> a;
            ++ num[a];
        }

        for(int i=0; i<10; ++i){
            if(num[i] == 0)
                cout << '-' << endl;
            else
                cout << string(num[i], '*') << endl;
        }
    }
}