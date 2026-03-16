#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector< int > LeapYear(int a, int b, vector<int > vec){
	for (int i = a; i <= b; i++){
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
			vec.push_back(i);
		}
	}
	return vec;
}

int main(){
	vector<int > vec;
	int a, b;

	// first input
	cin >> a >> b;

	while (a || b){
		vec.clear();
		vec = LeapYear(a, b, vec);

		// output
		if (!vec.empty()){
			for (int i = 0; i < vec.size(); i++){
				cout << vec.at(i) << endl;
			}
		}
		else{
			cout << "NA" << endl;
		}

		// input
		cin >> a >> b;
		if (a || b){
			cout << endl;
		}
	}

	return 0;
}