#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int n;
    while(cin >> n, n) {
        vector<int> v;
        for(int i = 512; i >= 1; i /= 2) {
            if(n < i) continue;
            n -= i;
            v.push_back(i);
            if(n <= 0) break;
        }
        for(int i=v.size()-1; i>=0; i--) {
            printf("%d%c", v[i], i ? ' ' : '\n');
        }

    }


    return 0;
}