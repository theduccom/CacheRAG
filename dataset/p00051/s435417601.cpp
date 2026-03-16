#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n, min, max;
	string s;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> s;
		sort(s.rbegin(),s.rend());
		max = atoi(s.c_str());
		sort(s.begin(), s.end());
		min = atoi(s.c_str());
		cout << max - min << endl;
	}
	return 0;
}