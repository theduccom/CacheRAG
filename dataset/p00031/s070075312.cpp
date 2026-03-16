#include <iostream>
using namespace std;

int main()
{
	int n, count = 0, sum = 1;
	static int ans[100][9] = { 0 };
	int data[100] = { 0 }, ansdata[100] = {0};
	for (int a = 0; a <= 10; a++) {
		data[a+1] = sum;
		sum = sum * 2;
	}
	while (cin >> n) {
		int data2, count2 = 0;
		for (int a = 0; a <= 10; a++) {
			if (n < data[a + 1]) {
				sum = data[a];
				data2 = a;
				ans[count][count2] = a;
				count2++;
				break;
			}
		}
		for (int a = data2-1; a > 0; a--) {
			sum = sum + data[a];
			if (sum > n) {
				sum = sum - data[a];
			}
			else {
				ans[count][count2] = a;
				count2++;
			}
			if (sum == n) {
				break;
			}
		}
		ansdata[count] = count2;
		count++;
	}
	for (int a = 0; a < count; a++) {
		for (int b = ansdata[a]-1; b>=0; b--) {
			cout << data[ans[a][b]];
			if (b != 0)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}