#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {

    string line;

    while(getline(cin, line)) {

        for(int i = 0; i < line.length(); i++) {
            if (line[i] != '@') {
                cout << line[i];
            } else {
                int t = line[i+1] - '0';
                for(int k = 0; k < t; k++)  cout << line[i+2];
                i += 2;
            }
        }
        cout << endl;
    }
    return 0;
}