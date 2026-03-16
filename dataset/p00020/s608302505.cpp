#include<bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin,input);

    for (auto &c: input) c = toupper(c);

    cout << input <<endl;
}