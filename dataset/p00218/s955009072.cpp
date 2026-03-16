#include <iostream>

using namespace std;

int main()
{
    int n;

    while (cin >> n, n) {
        while (n--) {
            int pm, pe, pj;

            cin >> pm >> pe >> pj;

            if (pm == 100 || pe == 100 || pj == 100) 
                cout << 'A';
            else if ((pm + pe) / 2.0 >= 90) 
                cout << 'A';
            else if ((pm + pe + pj) / 3.0 >= 80)
                cout << 'A';
            else if ((pm + pe + pj) / 3.0 >= 70)
                cout << 'B';
            else if ((pm + pe + pj) / 3.0 >= 50 && (pm >= 80 || pe >= 80))
                cout << 'B';
            else 
                cout << 'C';
            cout << endl;
        }
    }

    return 0;
}