#include <bits/stdc++.h>

using namespace std;

int main() {

    int cup[3] = {1, 0, 0};
    char pos[2], split;

    while(cin >> pos[0] >> split >> pos[1]) {
        swap(cup[pos[0] - 'A'], cup[pos[1] - 'A']);
    }

    for(int i = 0; i < 3; ++i) {
        if(cup[i]) cout << char('A' + i) << endl;
    }

}