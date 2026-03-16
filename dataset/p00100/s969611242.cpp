#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	int n, num;
	long long price, amount;
	map<int, long long> member;
	vector<int> array;

	while(cin >> n, n){
		member.clear();
		array.clear();
		for(int i = 0; i < n; i++){
			cin >> num >> price >> amount;
			member[num] +=  price * amount;
			for(int i = 0; i < array.size(); i++){
				if(num == array[i]){
					continue;
				}
			}
			if(member[num] >= 1000000){
				array.push_back(num);
			}
		}
		if(array.empty()){
			cout << "NA" << endl;
		}
		else{
			for(int i = 0; i < array.size(); i++){
				cout << array[i] << endl;
			}
		}
	}
	return 0;
}