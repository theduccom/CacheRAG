#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int n,x1,x2,y1,y2,p,q,a=0,b=0;
	vector<int> E,F,G,H;
	vector<long long int> S, T;
	vector<vector<long long int>> I,J;
	string s, t;
	vector<string> U, X, Y;
	vector<vector<string>> UU;

	cin >> n;
	for (int k = 0; k < n; k++) {
		cin >> s >> t;
		int f = 0;
			if (s.size() > 80 || t.size() > 80) {
				f = 1;
				F.push_back(f);
			}
			else F.push_back(0);
			x1 = s.size() % 10; y1 = (s.size() + 9) / 10; p = 8 - y1;
			for (int i = 0; i < p; i++)S.push_back(0);
			if (x1 == 0) for (int i = 0; i < y1; i++)S.push_back(stoll(s.substr(i * 10, 10)));
			else {
				S.push_back(stoll(s.substr(0, x1)));
				for (int i = 1; i < y1; i++)S.push_back(stoll(s.substr(x1 + (i - 1) * 10, 10)));
			}

			x2 = t.size() % 10; y2 = (t.size() + 9) / 10; q = 8 - y2;
			for (int i = 0; i < q; i++)T.push_back(0);
			if (x2 == 0) for (int i = 0; i < y2; i++)T.push_back(stoll(t.substr(i * 10, 10)));
			else {
				T.push_back(stoll(t.substr(0, x2)));
				for (int i = 1; i < y2; i++)T.push_back(stoll(t.substr(x2 + (i - 1) * 10, 10)));
			}
			I.push_back(S); S.clear();
			J.push_back(T); T.clear();
		}

	for (int k = 0; k < I.size(); k++) {
		for (int i = 0; i < 8; i++) U.push_back(to_string(I[k][i] + J[k][i]));
		UU.push_back(U); U.clear();
	}
	
	for (int k = 0; k < I.size(); k++) {
		for (int i = 7; i >= 0; i--) {
			UU[k][i] = to_string(stoll(UU[k][i]) + b);
			if (UU[k][i].size() == 11 && i == 0) {
				UU[k][i] = "a";
				b = 1;
			}
			else if (UU[k][i].size() == 11) {
				UU[k][i] = UU[k][i].substr(1, 10);
				b = 1;
			}
			else if (UU[k][i].size() < 10) {
				for (int j = 0; j < 10 - UU[k][i].size()+j; j++) UU[k][i] = "0" + UU[k][i];
				b = 0;
			}
			else b = 0;
		}
		b = 0;
	}

	for (int k = 0; k < UU.size(); k++) {
		int e = 0;
		for (int i = 0; i < UU[k].size(); i++) {
			if (UU[k][i] == "a") {
				e = 100;
				E.push_back(e);
				break;
			}
			else if (stoll(UU[k][i]) == 0 && i == 7)E.push_back(13);
			else if (stoll(UU[k][i]) == 0);
			else {
				e = i;
				E.push_back(e);
				break;
			}
		}
	}

	for (int k = 0; k < UU.size(); k++) {
		if (E[k] == 100)cout << "overflow";
		else if (F[k] == 1)cout << "overflow";
		else {
			if (E[k] == 13)cout << "0";
			else {
				cout << stoll(UU[k][E[k]]);
				for (int i = E[k] + 1; i < UU[k].size(); i++) cout << UU[k][i];
			}
		}
			cout << endl;
	}
	return 0;
}