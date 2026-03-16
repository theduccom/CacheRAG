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

        vector<long long> sale(4001, -1);
        vector<int> id;

        for(int i=0; i<n; ++i){
            int a, b, c;
            cin >> a >> b >> c;
            if(sale[a] == -1){
                sale[a] = 0;
                id.push_back(a);
            }
            sale[a] += (long long)b * c;
        }


        bool na = true;
        for(unsigned i=0; i<id.size(); ++i){
            if(sale[id[i]] >= 1000000){
                cout << id[i] << endl;
                na = false;
            }
        }
        if(na)
            cout << "NA" << endl;
    }
}