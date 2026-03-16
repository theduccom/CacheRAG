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
    cin >> n;

    for(int i=0; i<n; i++) {
        double ra,rb,xa,ya,xb,yb;
        cin>>xa>>ya>>ra>>xb>>yb>>rb;
        double d = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));

        if(d > ra + rb) {
            cout << 0 << endl;
        } else if(d < ra - rb) {
            cout << 2 << endl;
        } else if(d < rb - ra) {
            cout << -2 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}