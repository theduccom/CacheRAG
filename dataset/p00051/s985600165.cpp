#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
	string str;
	int n;
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cin >> str;
		sort(str.begin(), str.end());
		int min = atoi(str.c_str());
		sort(str.begin(), str.end(), greater<char>());
		int max = atoi(str.c_str());
		cout << max - min << endl;
	}
	
	return 0;
}