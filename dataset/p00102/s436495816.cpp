#include <iostream>

using namespace std;

int main() {
    for (;;) {
    int n;
    cin >> n;
    if (n == 0) return 0;

    int matrix[n+1][n+1];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n+1; i++) {
        matrix[n][i] = 0;
        matrix[i][n] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][n] += matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[n][j] += matrix[i][j];
        }
    }

    matrix[n][n] = 0;
    for (int i = 0; i < n; i++) {
        matrix[n][n] += matrix[n][i];
    }
    
    for (int i = 0; i < n+1; i++) {
        for (int j = 0; j < n+1; j++) {
            cout.width(5);
            if (j == n) 
                cout << matrix[i][j];
            else 
                cout << matrix[i][j];
        }
        cout << endl;
    }
    }

    return 0;
}

            