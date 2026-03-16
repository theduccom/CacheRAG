#include<iostream>
#include<vector>
using namespace std;
int main() {
	int a, b;
	vector<int>aa;
	vector<int>bb;
	while (cin >> a >> b) {
		if (a == 0 && b == 0)break;
		aa.push_back(a);
		bb.push_back(b);
	}
	for (int i = 0; i != aa.size(); i++){
		bool b = false;
		for (int j = aa[i]; j <= bb[i]; j++){
		if (j % 4 == 0) 
			if (j % 100 == 0) {
				if (j % 400 == 0) {
					b = true;
					cout << j << endl;
				}
			}
			else {
				b = true;
				cout << j << endl; 
			}
		}
		if (b == false)cout << "NA\n";
		if (i != aa.size() - 1)cout << endl;
	}
	char c;
	cin >> c;
}