#include <iostream>
#include <string>

using namespace std;

int field[8][8], first[2];

void searchFirstPlace();
int sumLine(int _line);

int main() {
	int sum;
	string str;
	char ans;

	while (1) {
		/*??\???*/
		for (int i = 0; i < 8; i++) {
			cin >> str;
			if (cin.eof()) break;

			for (int j = 0; j < 8; j++)
				field[i][j] = (str[j] == '1') ? 1 : 0;
		}
		if (cin.eof()) break;

		/*??????*/
		searchFirstPlace();
		sum = sumLine(first[1]);

		if (sum == 4) {
			ans = 'C';
		}
		else if (sum == 1) {
			if (sumLine(first[1] + 1) == 1)
				ans = 'B';
			else if (field[first[1] + 2][first[0] + 1] == 1)
				ans = 'F';
			else
				ans = 'D';
		}
		else {
			if (field[first[1] + 1][first[0]] == 0)
				ans = 'E';
			else if (field[first[1] + 1][first[0] + 1] == 0)
				ans = 'G';
			else
				ans = 'A';
		}

		/*??????*/
		cout << ans << endl;
	}

	return 0;
}

/*?????????????????¢??????1??????????????£?????????????????§?¨??????????*/
void searchFirstPlace() {
	bool flag = false;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (field[i][j] == 1) {
				first[0] = j;
				first[1] = i;

				flag = true;
				break;
			}
		}
		if (flag) break;
	}
}

/*???????????°??¨??????????????????????????°?????????*/
int sumLine(int _line) {
	int ans = 0;

	for (int i = 0; i < 8; i++) {
		if (field[_line][i] == 1) {
			ans++;
		}
	}

	return ans;
}