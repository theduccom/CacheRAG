#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int n, i;
	bool f;
	long long int a, b, c;
	map<int, long long int> member;
	vector<int> order;
	vector<int>::iterator it;
	while (cin>>n, n) {
		member.clear();
		order.clear();
		for (i = 0; i < n; i++) {
			cin>>a>>b>>c;
			member[a] += b*c;
			if ( order.end() == find( order.begin(), order.end(), a ) ) {
				order.push_back(a);
			}
		}
		f = true;
		for (it = order.begin(); it != order.end(); it++) {
			if (member[*it] >= 1000000) {
				cout<<*it<<endl;
				f = false;
			}
		}
		if (f) cout<<"NA"<<endl;
	}

	return 0;
}