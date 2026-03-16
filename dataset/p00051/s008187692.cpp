#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

#define N 8

using namespace std;

int main(void){
	int n; cin >> n;
	string input; 
	while(n --){
		cin >> input;
		sort(input.begin(), input.end());
		int min = atoi(input.c_str());
		reverse(input.begin(), input.end());
		cout << atoi(input.c_str()) - min << endl;
	}
	return 0;
}