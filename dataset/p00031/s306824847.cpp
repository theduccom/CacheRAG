#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n;
	int ary[] = { 512, 256, 128, 64, 32, 16, 8, 4, 2, 1 };

	while (cin >> n){
		vector<int> v;
		for (int i = 0; i < 10; i++){
			if (n >= ary[i]){
				n -= ary[i];
				v.push_back(ary[i]);
			}
		}
		for (auto i = v.rbegin(); i < v.rend(); i++){
			if (i != v.rbegin()) cout << " ";
			cout << *i;
		}
		cout << endl;
		n = 0;
	}
	return 0;
}