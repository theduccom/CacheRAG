#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<double> ms;
int main() {
    double m;
    while (cin >> m) {
        ms.push_back(m);
    }
    cout << (*max_element(ms.begin(), ms.end()) - *min_element(ms.begin(), ms.end())) << endl;
    return 0;
}
    