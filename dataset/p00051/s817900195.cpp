#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		string s;
		string t;
		cin >> s;
		sort(s.begin(), s.end());
		for (int i = s.size() - 1; i >= 0; i--){
			t += s[i];
		}
		int x, y;
		x = atoi(s.c_str());
		y = atoi(t.c_str());
		cout << y - x << endl;
	}
}