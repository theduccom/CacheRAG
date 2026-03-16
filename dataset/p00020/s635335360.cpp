#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string input ="", output = "";

    while(getline(cin, input)) {
        for (int i = 0; i < input.size(); i++) {
            if (input[i] >= 'a' && input[i] <= 'z')
                cout << char(input[i] + ('A' - 'a'));
            else
                cout << char(input[i]);
        }
        cout << endl;
    }
    //cout << output;
}