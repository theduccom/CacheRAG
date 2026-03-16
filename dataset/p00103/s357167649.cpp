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
    int n;
    cin >> n;

    while(--n >= 0){
        int ret = 0;
        int out = 0;
        bool first = false;
        bool second = false;
        bool third = false;

        for(;;){
            string s;
            cin >> s;
            if(s == "HIT"){
                if(third)
                    ++ ret;
                third = second;
                second = first;
                first = true;
            }else if(s == "HOMERUN"){
                if(first)
                    ++ ret;
                if(second)
                    ++ ret;
                if(third)
                    ++ ret;
                ++ ret;
                first = second = third = false;
            }else{
                ++ out;
                if(out == 3)
                    break;
            }
        }
        cout << ret << endl;
    }
}