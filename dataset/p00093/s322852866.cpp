#include <bits/stdc++.h>
using namespace std;
int a, b;
bool isLeap(int year) {
    return((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

void solve() {
    bool f = false;
    for(int r = a; r <= b; r++) {
        if(isLeap(r)){f = true; cout << r << endl;}
    }
    if(!f) {
        cout << "NA" << endl;
    }
}

int main(void) {
    int d = 0;
    while(cin >> a >> b, a|b) {
        if(d++) putchar('\n');
        solve();
    }
    return(0);
}