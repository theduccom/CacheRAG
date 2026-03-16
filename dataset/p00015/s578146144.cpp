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
    while(n-- > 0){
        string s1, s2;
        cin >> s1 >> s2;
        int i = s1.size() - 1;
        int j = s2.size() - 1;
        if(i >= 80 || j >= 80){
            cout << "overflow" << endl;
            continue;
        }

        int k = max(i, j) + 1;
        string s3(k+1, '0');
        while(k >= 0){
            int a = s3[k] - '0';
            if(i >= 0)
                a += s1[i] - '0';
            if(j >= 0)
                a += s2[j] - '0';
            if(a > 9){
                ++ s3[k-1];
                a -= 10;
            }
            s3[k] = a + '0';

            -- i;
            -- j;
            -- k;
        }

        if(s3[0] == '0')
            cout << s3.substr(1) << endl;
        else if(s3.size() > 80)
            cout << "overflow" << endl;
        else
            cout << s3 << endl;
    }
}