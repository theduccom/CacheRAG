#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    double m;
    double min = 1000001.0, max = 0.0;

    while (cin >> m){
        if (max < m){
            max = m;
        }
        if (min > m){
            min = m;
        }
    }
    cout << max - min << endl;

    return 0;
}