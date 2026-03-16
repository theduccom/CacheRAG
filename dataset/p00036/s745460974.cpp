#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <map>
#include <vector>
#include <stack>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

char mass[16][16];

char solve(int i, int j)
{
    if (mass[i][j] == '1' && mass[i][j+1] == '1' && mass[i+1][j] == '1' && mass[i+1][j+1] == '1') {
        return 'A';
    }
    else if (mass[i][j] == '1' && mass[i+1][j] == '1' && mass[i+2][j] == '1' && mass[i+3][j] == '1') {
        return 'B';
    }
    else if (mass[i][j] == '1' && mass[i][j+1] == '1' && mass[i][j+2] == '1' && mass[i][j+3] == '1') {
        return 'C';
    }
    else if (mass[i][j] == '1' && mass[i+1][j] == '1' && mass[i+1][j-1] == '1' && mass[i+2][j-1] == '1') {
        return 'D';
    }
    else if (mass[i][j] == '1' && mass[i][j+1] == '1' && mass[i+1][j+1] == '1' && mass[i+1][j+2] == '1') {
        return 'E';
    }
    else if (mass[i][j] == '1' && mass[i+1][j] == '1' && mass[i+1][j+1] == '1' && mass[i+2][j+1] == '1') {
        return 'F';
    }
    else if (mass[i][j] == '1' && mass[i][j+1] == '1' && mass[i+1][j] == '1' && mass[i+1][j-1] == '1') {
        return 'G';
    }
    
    return 0;
}

int main(void)
{
    char c;
    bool f;
    
    while (!cin.eof()) {
        f = false;
        
        rep(i, 16) {
            rep(j, 16) {
                mass[i][j] = '0';
            }
        }

        rep(i, 8) {
            cin >> mass[i];
        }
        
        rep(i, 8) {
            rep(j, 8) {
                if (mass[i][j] == '1' && f == false) {
                    c = solve(i, j);
                    cout << c << endl;
                    f = true;
                }
            }
        }
    }
    
    return 0;
}