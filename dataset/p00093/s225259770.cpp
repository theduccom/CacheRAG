#include <iostream>
#include <vector>
using namespace std;

bool isLeap(int y){
    if (y % 4 == 0){
	if (y % 400 == 0) return true;
	if (y % 100 == 0) return false;
	return true;
    }
    return false;
}

int main(){
    int a, b, c = 0;
    while (1){
	cin >> a >> b;
	if (a == 0 && b == 0) break;
	if (c != 0) cout << endl;
	c = 1;
	vector<int> y;
	for (int i = a; i <= b; i++){
	    if (isLeap(i)) y.push_back(i);
	}
	if (y.empty()) cout << "NA" << endl;
	else for (int i = 0; i < y.size(); i++)
		 cout << y[i] << endl;
    }
}