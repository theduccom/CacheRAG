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
        string s;
        getline(cin, s);
        if(s.size() == 0)
            return 0;

        int n = s.size();
        string ret;
        for(int i=0; i<n; ++i){
            if(s[i] == '@'){
                ret += string(s[i+1]-'0', s[i+2]);
                i += 2;
            }else{
                ret += s[i];
            }
        }
        cout << ret << endl;
    }
}