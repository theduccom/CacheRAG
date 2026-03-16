#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;

void swap(int& x, int& y) {
    x ^= y; y ^= x; x ^= y;
}

int main(void) {
    map<char, int> m;
    m.insert(make_pair('A', 1)); m.insert(make_pair('B', 2)); m.insert(make_pair('C', 3));
    int cup[4]; memset(cup, 0, sizeof(cup));
    cup[1] = 1;
    char a, b;
    while(scanf("%c,%c", &a, &b) != EOF) {
        swap(cup[m[a]], cup[m[b]]);
    }
    char alph = 'A';
    for(int r = 1; r < 4; r++, alph++) {
        if(cup[r]) cout << alph << endl;
    }
    return(0);
}