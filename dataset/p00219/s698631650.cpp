#include <iostream>

using namespace std;

int main()
{
    int n, idx;

    while (cin >> n, n) {
        int ice[10] = {0};

        for (int i = 0; i < n; i++) {
            cin >> idx;
            ice[idx]++;
        }

        for (int i = 0; i < 10; i++) {
            if (ice[i] == 0)
                cout << '-';
            else 
                while (ice[i]--)
                    cout << '*';
            cout << endl;
        }
    }
    
    return 0;
}