#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int parse(string a) {
	int b = 0;
	for (char c : a) {
		b *= 10; b += c - 48;
	}
	return b;
}
vector<int>split(string a) {
	vector<int>b;
	string c = "";
	for (char d : a) {
		if (d == ',') { b.push_back(parse(c)); c = ""; }
		else c += d;
	}
	b.push_back(parse(c));
	return b;
}
int main() {
	int a, b;
	cin >> a >> b;
	int c[100][100];
	for (int g = 0; g<a; g++) {
		for (int h = 0; h < a; h++) {
			if (g == h)c[g][h] = 0;
			else c[g][h] = 1<<29;
		}
	}
	for (int d = 0; d < b; d++) {
		string e;
		cin >> e;
		vector<int>f = split(e);
		f[0]--; f[1]--;
		c[f[0]][f[1]] = f[2];
		c[f[1]][f[0]] = f[3];
	}
	for (int x = 0; x < a; x++) {
		for (int y = 0; y < a; y++) {
			for (int z = 0; z < a; z++) {
				c[y][z] = min(c[y][z], c[y][x] + c[x][z]);
			}
		}
	}
	string s;
	cin >> s;
	vector<int>q = split(s);
	q[0]--; q[1]--;
	cout << q[2] - q[3] - c[q[0]][q[1]] - c[q[1]][q[0]] << endl;
}