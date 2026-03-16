#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<iomanip>
using namespace std;

int main(){

	while (true) {
		int cnt = 0;
		cin >> cnt;
		if (cnt == 0) break;

		typedef std::pair<long, long> elemType;
		typedef std::vector<elemType> dataType;
		dataType data;
		for (int i = 0; i < cnt; ++i) {
			long id, price, amount;
			cin >> id >> price >> amount;
			long g = price * amount;

			bool found = false;
			for (unsigned int i = 0; i < data.size(); ++i) {
				if (data[i].first == id) {
					data[i].second += g;
					found = true;
				}
			}
			if (!found) data.push_back(elemType(id, g));
		}
		bool bHitted = false;
		for (dataType::iterator it = data.begin(); it != data.end(); ++it) {
			if (it->second >= 1000000) {
				cout << it->first << "\n";
				bHitted = true;
			}
		}
		if (!bHitted) {
			cout << "NA\n";
		}
	}
	return 0;
}