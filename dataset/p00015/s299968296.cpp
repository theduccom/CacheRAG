#include<iostream>
#include<string>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		bool carry = false;
		string first, second;
		cin >> first >> second;

		string sum;

		auto it1 = first.rbegin();
		auto it2 = second.rbegin();
		while (it1 != first.rend() || it2 != second.rend()) {

			int temp1 = (it1 != first.rend()) ? (*it1++) - '0' : 0;
			int temp2 = (it2 != second.rend()) ? (*it2++) - '0' : 0;
			int temp_sum = temp1 + temp2 + (carry ? 1 : 0);
			if (temp_sum / 10 != 0) {
				carry = true;
				temp_sum %= 10;
			}
			else {
				carry = false;
			}

			sum.insert(0, to_string(temp_sum));
		}
		if (carry == true) {
			sum.insert(0, 1, '1');
		}

		if (first.length() > 80 || second.length() > 80 || sum.length() > 80) {
			cout << "overflow" << endl;
		}
		else {
			cout << sum << endl;
		}
	}


	return 0;
}