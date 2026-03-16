#include<iostream>
#include<string>

using namespace std;

int main() {
	// the, this, thatの後はスペースと仮定する
	const string str_the("the "), str_this("this "), str_that("that ");
	string line;
	while (getline(cin, line)) {
		while (true) {
			auto result_the = line.find(str_the, 0);
			auto result_this = line.find(str_this, 0);
			auto result_that = line.find(str_that, 0);
			if (string::npos != result_the || string::npos != result_this
				|| string::npos != result_that) {
				break;
			}
			for (auto& x : line){
				char result;
				if (x >= 'a' && x < 'z') {
					++x;
				}
				else if (x == 'z') {
					x = 'a';
				}
			}
		}

		cout << line << endl;
	}
	return 0;
}