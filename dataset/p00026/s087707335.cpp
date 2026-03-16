#include<iostream>
#include<vector>
#include<string>
using namespace std;

int parse(string a) {
	int s = 0;
	for (int b = 0; b < a.length(); b++) {
		s *= 10;
		s += a[b] - 48;
	}
	return s;
}
vector<int>split(string a) {
	vector<int>s;
	string b = "";
	for (int c = 0; c < a.length(); c++) {
		if (a[c] == ',') { s.push_back(parse(b)); b = ""; }
		else b += a[c];
	}
	s.push_back(parse(b));
	return s;
}
int main() {
	vector<vector<int>>masu(10,vector<int>(10));
	int xp[5]{ -1,0,0,0,1 };
	int yp[5]{0,-1,0,1,0 };
	int xq[13]{ -2,-1,-1,-1,0,0,0,0,0,1,1,1,2 };
	int yq[13]{ 0,-1,0,1,-2,-1,0,1,2,-1,0,1,0 };
	string a;
	while (cin >> a) {
		vector<int>b;
		b = split(a);
		if (b[2] == 1){
			for (int l = 0; l < 5; l++) {
				if (b[0] + xp[l] < 10 && b[0] + xp[l]>-1 && b[1] + yp[l] < 10 && b[1] + yp[l]>-1)masu[b[0] + xp[l]][b[1] + yp[l]]++;
		}
		}
		else if (b[2] == 2) {
			for (int l = b[0] - 1; l < b[0] + 2; l++) {
				for (int r = b[1] - 1; r < b[1] + 2; r++) {
					if (l < 10 && l>-1 && r < 10 && r>-1) masu[l][r]++;
				}
			}
		}
		else {
			for (int l = 0; l < 13; l++) {
				if (b[0] + xq[l] < 10 && b[0] + xq[l]>-1 && b[1] + yq[l] < 10 && b[1] + yq[l]>-1)masu[b[0] + xq[l]][b[1] + yq[l]]++;
			}
		}
	}
	int zero, n;
	zero = n = 0;
	for (auto j : masu) {
		for (int i : j) {
			if (!i)zero++;
			else if (i > n)n = i;
		}
	}
	cout << zero << endl << n << endl;
}