#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	int n, num;
	string str;
	long long a;
	
	while (cin >> n, n){
		map <string, long long> m;
		vector <string> data;
		for (int i = 0; i < n; i++){
			cin >> str >> num >> a;
			if (!m[str]) data.push_back(str);
			m[str] += (num * a);
		}
		bool flag = true;
		for (int i = 0; i < data.size(); i++){
			if (1000000 <= m[data[i]]){
				cout << data[i] << endl;
				flag = false;
			}
		}
		if (flag) cout << "NA" << endl;
	}
	
	return 0;
}