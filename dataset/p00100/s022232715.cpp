#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n;
	while(cin >> n){
		if(n == 0) break;
		map<int, int> officers;
		vector<int> ids;
		for(int i = 0; i < n; i++){
			int id;
			int value;
			int num;
			int need;
			cin >> id >> value >> num;
			if(value > 0){
				need = 1000000 % value == 0 ? 1000000 / value : 1000000 / value + 1;
				if(num >= need){
					officers[id] = 1000000;
					if(find(ids.begin(), ids.end(),id) == ids.end())
						ids.push_back(id);
				} else {
					if(find(ids.begin(), ids.end(),id) == ids.end()){
						ids.push_back(id);
						officers[id] = value * num;
					} else {
						officers[id] += value * num;
						if(officers[id] > 1000000)
							officers[id] = 1000000;
					}
				}
			}
		}
		int count = 0;
		for(vector<int>::const_iterator iter = ids.begin(); 
			iter != ids.end(); iter++){
			if(officers[*iter] >= 1000000){
				cout << *iter << endl;
				count++;
			}
		}
		if(!count) cout << "NA" << endl;
	}
	return 0;

}