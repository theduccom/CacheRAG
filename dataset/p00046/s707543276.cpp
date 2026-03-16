#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    double maxh = -1, minh = 114514810;
    double h;
    while(cin >> h) {
        maxh = max(maxh, h);
        minh = min(minh, h);
    } 
    cout << maxh - minh << endl;

    return 0;
}