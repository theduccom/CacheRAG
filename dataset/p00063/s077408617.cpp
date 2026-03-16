#include <iostream>
#include <cstdio>
using namespace std;

bool isPalindrome(string a) {
    for(int r = 0; r < a.size() / 2; r++) {
        if(a[r] != a[a.size() - r - 1]) return(false);
    }
    return(true);
}

int main(void) {
    string check;
    int sum = 0;
    while(cin >> check) {
        sum += isPalindrome(check);
    }
    cout << sum << endl;
    return(0);
}