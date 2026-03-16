#include <iostream>
#include <string>
using namespace std;

int main(){
	int len, kk, kkk;
	string input, k;
	while (cin >> input) {
		string ans = "";
		len = input.size();
		for (int i = 0; i < len; i++) {
			kkk = input[i];
			if (kkk == 64) {
				i++;
				k = input[i];
				kk = stoi(k);
				i++;
				for(int j=0;j<kk;j++){
					ans += input[i];
				}
			}
			else {
				ans += input[i];
			}
		}
		cout << ans << endl;
	}
}