#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
	long long int n, a, b, c;
	int flag;
	map<int, long long int> m;
	vector<int> v;
	while (cin >> n, n){
		m.clear();
		v.clear();
		flag = 0;
		for (int i = 0; i < n; i++){
			cin >> a >> b >> c;
			if(m[a] == 0) v.push_back(a);
			m[a] += b * c;
		}
		for (int i = 0; i < v.size(); i++){
			if (m[v[i]] >= 1000000ll){
				flag = 1;
				cout << v[i] << endl;
			}
		}
		if (!flag) cout << "NA" << endl;
	}
	return 0;
}