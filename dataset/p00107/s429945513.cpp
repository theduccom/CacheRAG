#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	while(true){
		vector<int> size(3);
		cin >> size[0] >> size[1] >> size[2];
		if(size[0] == 0 && size[1] == 0 && size[2] == 0){ break; }
		sort(size.begin(), size.end());
		int n;
		cin >> n;
		while(n--){
			int r;
			cin >> r;
			if(4 * r * r > size[0] * size[0] + size[1] * size[1]){
				cout << "OK" << endl;
			}else{
				cout << "NA" << endl;
			}
		}
	}
	return 0;
}