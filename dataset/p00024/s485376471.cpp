#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double v;
    while(cin >> v)
    {
        double y = 4.9 * (v / 9.8) * (v / 9.8);
        cout << std::ceil(y/5+1) << endl;
    }
    return 0;
}