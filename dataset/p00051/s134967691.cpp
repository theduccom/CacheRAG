#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int a, b;
	int n;
	cin >> n;
	string v;
	while(n > 0){
		cin >> v;
	sort(v.begin() , v.end());
	a = stoi(v);
	sort(v.begin() , v.end(), greater<int>());
	b = stoi(v);
	cout << b - a << endl;
		n--;
	}
	

	return 0;
}