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
    map<string, vector<int> > index;
    for(;;){
        string s;
        int n;
        if(!(cin >> s >> n))
            break;
        index[s].push_back(n);
    }

    map<string, vector<int> >::iterator it;
    for(it=index.begin(); it!=index.end(); ++it){
        cout << it->first << endl;
        sort(it->second.begin(), it->second.end());
        cout << it->second[0];
        for(unsigned i=1; i<it->second.size(); ++i){
            cout << ' ' << it->second[i];
        }
        cout << endl;
    }

    return 0;
}