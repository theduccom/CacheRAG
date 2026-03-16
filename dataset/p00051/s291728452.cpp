#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int n,x,tmp[8];
	vector<int> r;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> x;
		for (int j=0; j<8; j++)
		{
			tmp[j] = x%10;
			x/=10;
		}
		sort(tmp,tmp+8,greater<int>());
		int max=0,min=0;
		for (int j=0; j<8; j++)
		{
			max *= 10;
			max += tmp[j];
		}
		sort(tmp,tmp+8);
		for (int j=0; j<8; j++)
		{
			min *= 10;
			min += tmp[j];
		}
		r.push_back(max-min);
	}
	for (int i=0; i<n; i++)
	{
		cout << r[i] << endl;
	}
}