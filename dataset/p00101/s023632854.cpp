#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n;
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        string input;
        getline(cin, input);
        while (input.find("Hoshino") != string::npos) {
            input.replace(input.find("Hoshino"), 7, "Hoshina");
        }
        cout << input << endl;
    }
}