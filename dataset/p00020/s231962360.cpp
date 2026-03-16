#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main(void) {
    string input;
    getline(cin, input);
    for(int r = 0; r < input.length(); r++) {
        if(isalpha(input[r]) && islower(input[r])) input[r] = toupper(input[r]);
    }
    cout << input << endl;
    return(0);
}