#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> blood_t;
    int n;
    char comma;
    string blood;
    while (cin >> n >> comma >> blood) {
        blood_t[blood]++;
    }
    cout << blood_t["A"] << endl;
    cout << blood_t["B"] << endl;
    cout << blood_t["AB"] << endl;
    cout << blood_t["O"] << endl;
    return 0;
}