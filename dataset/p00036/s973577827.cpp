#include <iostream>

using namespace std;


int main(){

	char c, ans;
	bool p[10][11];



	while (1){
		ans = '-';

		for (int i = 0; i < 10; i++){
			for (int j = 0; j < 11; j++){
				p[i][j] = 0;
			}
		}

		for (int i = 0; i < 8; i++){
			for (int j = 0; j < 8; j++){
				cin >> c;
				p[i][j + 1] = c - '0';
			}
		}

		if (cin.eof())break;


		for (int i = 0; i < 8; i++){
			for (int j = 0; j < 8; j++){
				if (p[i][j + 1] == 1){
					if (p[i][j + 3] == 1) ans = 'C';
					else if (p[i + 2][j + 1] == 1) ans = 'B';
					else if (p[i + 2][j] == 1) ans = 'D';
					else if (p[i + 1][j + 3] == 1) ans = 'E';
					else if (p[i + 2][j + 2] == 1) ans = 'F';
					else if (p[i + 1][j] == 1) ans = 'G';
					else if (p[i + 1][j + 2] == 1) ans = 'A';
				}
				if (ans != '-')break;
			}
			if (ans != '-')break;
		}

		cout << ans << endl;
	}


	return 0;
}