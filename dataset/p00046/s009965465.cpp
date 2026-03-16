#include <iostream>

using namespace std;

int main()
{
        double d;
        double max = -0.1, min = 1000000.1;

        while (cin >> d) {
                max = (max < d) ? d : max;
                min = (min > d) ? d : min;
        }

        cout << (max - min) << endl;

        return 0;
}