#include<iostream>
using namespace std;
int main() {
	bool sosu[110000] = { false };
	for (int i = 2; i <= sizeof(sosu) / sizeof(bool); ++i) {
		if (sosu[i] == false) {
			for (int k = i * 2; k <= sizeof(sosu) / sizeof(bool); k+=i) {
				sosu[k] = true;
			}
		}
	}
	int answer;
	int time;
	while (1) {
		cin >> time;
		answer = 0;
		int cnt = 0;
		if (time == 0)break;
		for (int i = 2; cnt != time; ++i) {
			if (sosu[i] == false) {
				answer += i;
				++cnt;
			}
		}
		cout << answer << endl;
	}
	return 0;
}