#include <iostream>
#include <vector>
using namespace std;

int main(){
	int weight;
	while(cin >> weight){
		vector<int> vi;
		for(int i = 512; weight != 0; i = i / 2){
			if(weight >= i){
				weight -= i;
				vi.push_back(i);
			}
		}
		int size = vi.size();
		if(size > 0){
			cout << vi[size - 1];
			for(int i = size - 2; i >= 0; i--){
				cout << " " << vi[i];
			}
		}
		cout << endl;
	}
	return 0;
}