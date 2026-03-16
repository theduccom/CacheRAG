#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
	
	int n;
	
	while(cin >> n, n) {
		bool f = false;
		vector<int> IDs;
		unordered_map<int, long long> result;
		
		for(int i = 0; i < n; ++i) {
			int ID;
			long long price, number;
			cin >> ID >> price >> number;
			
			IDs.push_back(ID);
			result[ID] += price * number;
		}
		
		unordered_set<int> used;
		
		for(int ID : IDs) {
			if(used.count(ID)) continue;
			
			if(result[ID] >= 1000000) {
				cout << ID << endl;
				f = true;
			}
			used.insert(ID);
		}
		
		if(!f) {
			cout << "NA" << endl;
		}
		
	}
	
	return 0;
}