#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, min, max;
    string num;
    cin >> n;
    while (n--) {
        cin >> num;
        sort(num.begin(), num.end());
        min = stoi(num);
        reverse(num.begin(), num.end());
        max = stoi(num);
        cout << max - min << endl;
    }

    return 0;
}