#include <bits/stdc++.h>

using namespace std;

int main() {

    int num, member[4] = {0};
    char split;
    string blood;

    while(cin >> num >> split >> blood) {
        if(blood == "A") {
            ++member[0];
        } else if(blood == "B") {
            ++member[1];
        } else if(blood == "AB") {
            ++member[2];
        } else {
            ++member[3];
        }
    }

    for(int i = 0; i < 4; ++i) {
        cout << member[i] << endl;
    }

}