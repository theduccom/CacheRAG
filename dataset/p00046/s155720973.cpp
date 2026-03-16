#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h;
    vector<double> a;
    while (cin >> h) {
        a.push_back(h);
    }
    cout << *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end()) << endl;
    return 0;
}