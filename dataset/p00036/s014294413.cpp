#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main(void) {
    while(true) {
        vector<int> key;
        for(int r = 0; r < 8; r++) {
            int input; cin >> input;
            if(input != 0) key.push_back(input);
        }
        if(cin.eof()) break;
        int height = (int)key.size();
        switch(height) {
            case 1:cout << "C" << endl; break;
            case 2:
                if(key[0] == key[1]) cout << "A" << endl;
                else if(key[0] > key[1]) cout << "E" << endl;
                else                     cout << "G" << endl;
                break;
            case 3:
                if(key[0] < key[2]) cout << "D" << endl;
                else                cout << "F" << endl;
                break;
            default: cout << "B" << endl;
        }
    }
    return(0);
}