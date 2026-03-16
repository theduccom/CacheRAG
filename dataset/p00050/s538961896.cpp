#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string x;
	vector<int> p, a;
	int n;
	getline(cin, x);
	p.push_back(0);
	a.push_back(0);
	while(n=x.find("peach", p.back() + 5), ~n)
		p.push_back(n);
	while(n=x.find("apple", a.back() + 5), ~n)
		a.push_back(n);
	for(int i = 1; i < p.size(); i++)
		x.replace(p[i], 5, "apple");
	for(int i = 1; i < a.size(); i++)
		x.replace(a[i], 5, "peach");
	cout<< x <<endl;
	return 0;
}
