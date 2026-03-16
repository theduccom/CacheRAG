#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		stringstream sst;
		string str;
		int m;
		cin >> str;
		sst << str;
		sst >> m;
		int num[8];
		for(int j=0;j<8;j++){
			num[j] = m%10;
			m/=10;
		}
		sort(num,num+8);
		int max=0,min=0;
		for(int j=0;j<8;j++){
			min += num[j];
			min *=10;
			max +=num[7-j];
			max *=10;
		}
		max/=10;
		min/=10;
		cout << max-min << endl;
	}
	return 0;
}