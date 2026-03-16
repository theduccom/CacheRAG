#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	vector<int> r;
	while(true)
	{
		cin >> n;
		if (n==0)
			break;
		int cnt=0;
		for(int i=1; i<=n; i++)
		{
			int tmp=i;
			while(true)
			{
				if (tmp%5==0)
				{
					cnt++;
					tmp/=5;
				} else {
					break;
				}
			}
		}
		r.push_back(cnt);
	}
	for(int i=0; i<r.size(); i++)
	{
		cout << r[i] << endl;
	}
	return 0;
}