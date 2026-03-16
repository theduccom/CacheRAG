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

bool hasA(int bd[8][8]) {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (bd[i][j] && bd[i][j+1] && bd[i+1][j] && bd[i+1][j+1]) return true;
        }
    }
    return false;
}

bool hasB(int bd[8][8]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            if (bd[i][j] && bd[i+1][j] && bd[i+2][j] && bd[i+3][j]) return true;
        }
    }
    return false;
}

bool hasC(int bd[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 5; j++) {
            if (bd[i][j] && bd[i][j+1] && bd[i][j+2] && bd[i][j+3]) return true;
        }
    }
    return false;
}

bool hasD(int bd[8][8]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (bd[i][j+1] && bd[i+1][j] && bd[i+1][j+1] && bd[i+2][j]) return true;
        }
    }
    return false;
}

bool hasE(int bd[8][8]) {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 6; j++) {
            if (bd[i][j] && bd[i][j+1] && bd[i+1][j+1] && bd[i+1][j+2]) return true;
        }
    }
    return false;
}

bool hasF(int bd[8][8]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (bd[i][j] && bd[i+1][j] && bd[i+1][j+1] && bd[i+2][j+1]) return true;
        }
    }
    return false;
}

bool hasG(int bd[8][8]) {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 6; j++) {
            if (bd[i][j+1] && bd[i][j+2] && bd[i+1][j] && bd[i+1][j+1]) return true;
        }
    }
    return false;
}

int main() {
    string s;
    int bd[8][8];
    while(cin >> s) {
        REP(i,8) bd[0][i] = s[i] - '0';
        REP(j,7) {
            cin >> s;
            REP(i,8) bd[j+1][i] = s[i] - '0';
        }
        // input ends
        if (hasA(bd)) cout << "A" << endl;
        else if (hasB(bd)) cout << "B" << endl;
        else if (hasC(bd)) cout << "C" << endl;
        else if (hasD(bd)) cout << "D" << endl;
        else if (hasE(bd)) cout << "E" << endl;
        else if (hasF(bd)) cout << "F" << endl;
        else if (hasG(bd)) cout << "G" << endl;
    }
    return 0;
}