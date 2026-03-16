#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int N;

	while (cin >> N && N != 0) {
		int dataset[11][11] = {0};
        for (int i = 0; i != N; ++i) {
            for (int j = 0; j != N; ++j) {
                cin >> dataset[i][j];
            }
        }

        for (int i = 0; i != N; ++i) {
            for (int j = 0; j != N; ++j) {
                dataset[i][N] += dataset[i][j];
            }
        }

        for (int i = 0; i <= N; ++i) {
            for (int j = 0; j != N; ++j) {
                dataset[N][i] += dataset[j][i];
            }
        }

        for (int i = 0; i != N+1; ++i) {
            for (int j = 0; j != N+1; ++j) {
                cout << setw(5) << dataset[i][j];
            } 
            cout << endl;
        }
	}
    return 0;
}