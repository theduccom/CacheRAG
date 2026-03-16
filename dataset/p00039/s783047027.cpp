#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {
        int sum = 0;
        vector<int> arr(s.length());

        for (int i = 0; i < s.length(); i++) {
            if (s.at(i) == 'I') {
                arr.at(i) = 1;
            }
            else if (s.at(i) == 'V') {
                arr.at(i) = 5;
            }
            else if (s.at(i) == 'X') {
                arr.at(i) = 10;
            }
            else if (s.at(i) == 'L') {
                arr.at(i) = 50;
            }
            else if (s.at(i) == 'C') {
                arr.at(i) = 100;
            }
            else if (s.at(i) == 'D') {
                arr.at(i) = 500;
            }
            else if (s.at(i) == 'M') {
                arr.at(i) = 1000;
            }
        } //end for

        for (int j = arr.size()-1; j >=0;j--) {
            if (j == arr.size() - 1) {
                sum += arr.at(j);
            }
            else if (arr.at(j) < arr.at(j + 1)) {
                sum -= arr.at(j);
            }
            else {
                sum += arr.at(j);
            }
        }
        cout << sum << endl;
    }
}