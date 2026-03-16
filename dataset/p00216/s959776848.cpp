#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>w;
	int t;
	while (cin >> t){
		if (t == -1)
			break;
		else if (t <= 10)
			w.push_back(1150);
		else if (t <= 20)
			w.push_back(1150 + (t - 10) * 125);
		else if (t <= 30)
			w.push_back(2400 + (t - 20) * 140);
		else
			w.push_back(3800 + (t - 30) * 160);
	}
	for (int i = 0; i != w.size(); i++){
		cout << 4280 - w[i];
		cout << endl;
	}
	char c;
	cin >> c;
}