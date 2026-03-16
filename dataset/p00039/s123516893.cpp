#include<iostream>
#include<string>
using namespace std;
string S; char T[8] = "IVXLCDM"; int X[7] = { 1,5,10,50,100,500,1000 }, l[10000];
int main() {
	while (cin >> S) {
		int cnt = 0;
		for (int i = 0; i < S.size(); i++) {
			for (int j = 0; j < 7;j++){
				if (S[i] == T[j]) { l[i] = j; cnt += X[j]; }
			}
		}
		for (int i = 1; i < S.size(); i++) {
			if (l[i - 1] < l[i]) { cnt -= X[l[i - 1]] * 2; }
		}
		cout << cnt << endl;
	}
}