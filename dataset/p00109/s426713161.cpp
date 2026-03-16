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

int solve(string& s, int& i)
{
    int a = 0;
    int b = 0;
    char prev = '+';
    for(;;){
        int x = 0;
        if(s[i] == '('){
            ++ i;
            x += solve(s, i);
            ++ i;
        }else{
            while('0' <= s[i] && s[i] <= '9'){
                x *= 10;
                x += s[i] - '0';
                ++ i;
            }
        }

        if(prev == '+'){
            a += b;
            b = x;
        }else if(prev == '-'){
            a += b;
            b = -x;
        }else if(prev == '*'){
            b *= x;
        }else{
            b /= x;
        }

        if(s[i] == ')' || s[i] == '=')
            break;

        prev = s[i];
        ++ i;
    }

    return a + b;
}

int main()
{
    int n;
    cin >> n;

    while(--n >= 0){
        string s;
        cin >> s;
        int i = 0;
        cout << solve(s, i) << endl;
    }

    return 0;
}