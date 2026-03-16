#include <bits/stdc++.h>
using namespace std;

void convert(string& target, string before, string after) {
    while(target.find(before) != string::npos) {
        target.replace(target.find(before), before.length(), after);
    }
}

int main(void) {
    int num;
    cin >> num;
    cin.ignore();
    for(int r = 0; r < num; r++) {
        string input; getline(cin, input);
        convert(input, "Hoshino", "Hoshina");
        cout << input << endl;
    }
    return(0);
}