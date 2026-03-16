#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <stack>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}

int whichSection(double dist, int l1, int l2, int l3, int l4, int l5, int l6, int l7, int l8, int l9, int l10) {
    vector<int> l;
    l.push_back(l1);
    l.push_back(l2);
    l.push_back(l3);
    l.push_back(l4);
    l.push_back(l5);
    l.push_back(l6);
    l.push_back(l7);
    l.push_back(l8);
    l.push_back(l9);
    l.push_back(l10);
    int distFromLeftSec = 0;
    REP(i,10) {
        distFromLeftSec += l[i];
        if (distFromLeftSec >= dist) return i+1;
    }
    return -1;
}

int main() {
    int l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,v1,v2;
    char c;
    while(cin>>l1>>c>>l2>>c>>l3>>c>>l4>>c>>l5>>c>>l6>>c>>l7>>c>>l8>>c>>l9>>c>>l10>>c>>v1>>c>>v2) {
        int dist = l1+l2+l3+l4+l5+l6+l7+l8+l9+l10;
        double time = double(dist) / (v1+v2);
        double distFromLest = time * v1;
        cout << whichSection(distFromLest, l1,l2,l3,l4,l5,l6,l7,l8,l9,l10) << endl;
    }
    return 0;
}