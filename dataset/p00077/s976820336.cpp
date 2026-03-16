#include <iostream>
#include <cstdio>
using namespace std;

string solve(string input) {
    string ans = "";
    for(int r = 0; r < input.length(); r++) {
        if(input[r] == '@') {
            char target = input[r + 2];
            int rep = input[r + 1] - '0';
            
            for(int c = 0; c < rep; c++) ans += target;
            r+=2;
        } else {
            ans += input[r];
        }
    }
    return(ans);
}

int main(void) {
    string input;
    while(cin >> input) {
        cout << solve(input) << endl;
    }
    return(0);
}