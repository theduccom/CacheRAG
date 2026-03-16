#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<string> v;
vector<string> f[7] = {
	{"11", "11"},
	{"1", "1", "1", "1"},
	{"1111"},
	{"01", "11", "10"},
	{"110", "011"},
	{"10", "11", "01"},
	{"011", "110"}
};
bool contain(vector<string> v1, vector<string> v2) {
	for(int i = 0; i <= (int)(v1.size() - v2.size()); i++) {
		for(int j = 0; j <= (int)(v1[0].size() - v2[0].size()); j++) {
			bool flag = true;
			for(int k = 0; k < v2.size(); k++) {
				if(v1[i + k].substr(j, v2[0].size()) != v2[k]) {
					flag = false; break;
				}
			}
			if(flag) return true;
		}
	}
	return false;
}
int main() {
	v.resize(8);
	while(cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> v[5] >> v[6] >> v[7]) {
		for(int i = 0; i < 7; i++) {
			if(contain(v, f[i])) cout << (char)(i + 65) << endl;
		}
	}
	return 0;
}