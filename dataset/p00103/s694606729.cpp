#include <bits/stdc++.h>
using namespace std;
int point = 0;
int out = 0;
bool base[3];

//1... Single Hit  2... Home run  3...Out
void exec(int event) {
    switch(event) {
        case 1:
            if(base[2]){ base[2] = false; point++;}
            if(base[1]){ base[2] = true; base[1] = false;}
            if(base[0]){ base[1] = true; base[0] = false;}
            base[0] = true; break;
        case 2:
            point += base[0] + base[1] + base[2] + 1;
            memset(base, false, sizeof(base)); break;
        case 3:
            out++; break;
    }
}

int main(void) {
    int n; cin >> n;
    for(int r = 0; r < n; r++) {
        point = out = 0; memset(base, false, sizeof(base));
        while(out < 3) {
            string input; cin >> input;
            if(input == "HIT")          exec(1);
            else if(input == "HOMERUN") exec(2);
            else                        exec(3);
        }
        cout << point << endl;
    }
    return(0);
}