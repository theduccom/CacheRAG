#include<iostream>
#include<string>
using namespace std;
const string hr = "HOMERUN";
const string h = "HIT";
const string o = "OUT";
int main() {
	int n;
	cin >> n;
	int point[100];
	for (int j = 0; j < n; j++){
		string s;
		int bs = 0, p = 0;
		for (int i = 0; i < 3;){
			cin >> s;
			if (s == o)i++;
			else if (s == h){
				if (bs == 3)p += 1;
				else bs += 1;
			}
			else if (s == hr){
				p += bs + 1;
				bs = 0;
			}
		}
		point[j] = p;
	}
	for (int i = 0; i < n; i++){
		cout << point[i] << endl;
	}
	char c;
	cin >> c;
	return 0;
}