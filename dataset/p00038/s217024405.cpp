#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
bool find_two(vector<int> v, int mode[14]) {
    for(int r = 0; r < 5; r++) {
        if(mode[v[r]] == 2) return(true);
    }
    return(false);
}
bool isSequencial(vector<int> v) {
    if((v[0]==1&&v[1]==2&&v[2]==3&&v[3]==4&&v[4]==5) || (v[0]==1&&v[1]==10&&v[2]==11&&v[3]==12&&v[4]==13)) { return(true);}
    for(int r = 1; r < 5; r++) {
        if(v[r] - 1 != v[r - 1]) return(false);
    }
    return(true);
}

int main(void) {
    vector<int> v(5);
    while(scanf("%d,%d,%d,%d,%d", &v[0], &v[1], &v[2], &v[3], &v[4]) != EOF) {
        //頻度記録
        int mode[14]; memset(mode, 0, sizeof(mode));
        int max = -1;
        for(int r = 0; r < 5; r++) {
            mode[v[r]]++; if(mode[v[r]] > max) max = mode[v[r]];
        }
        sort(v.begin(), v.end());
        if(max == 4) {
            cout << "four card" << endl;
        } else if(max == 3) {
            if(find_two(v, mode)) cout << "full house" << endl;
            else                  cout << "three card" << endl;
        } else if(isSequencial(v)) {
            cout << "straight" << endl;
        } else if(max == 2) {
            int count = 0;
            for(int r = 0; r < 14; r++) {
                if(mode[r] == 2) count++;
            }
            if(count == 2) {
                cout << "two pair" << endl;
            } else if(count == 1) {
                cout << "one pair" << endl;
            } else cout << "null" << endl;
        } else {
            cout << "null" << endl;
        }
    }
    return(0);
}