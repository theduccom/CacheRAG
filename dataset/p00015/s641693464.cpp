#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>
#include <stack>

using namespace std;
typedef long long Int;
#define REP(i , x) for(Int i = 0 ; i < x ; ++i)

typedef pair<int, int> P;


int main()
{
	int n;
	cin >> n;
	REP(i, n){
		string a, b;
		int a_a[100] = { 0 };
		int b_a[100] = { 0 };
		int c_a[100] = { 0 };
		cin >> a >> b;

		vector<char> a_b(a.rbegin(), a.rend());
		vector<char> b_b(b.rbegin(), b.rend());

		if (a_b.size() > 80 || b_b.size() > 80){
			cout << "overflow" << endl;
			continue;
		}

		int carry(0);
		vector<int> ans;

		if (a_b.size() > b_b.size()){
			b_b.resize(a_b.size(), '0');
		}
		else{
			a_b.resize(b_b.size(), '0');
		}

		REP(i, a_b.size()){
			int temp = a_b[i] - '0' + b_b[i] - '0' + carry;
			carry = temp / 10;
			ans.push_back(temp % 10);
		}

		if (carry)
			ans.push_back(carry);

		if (ans.size() > 80){
			cout << "overflow" << endl;
			continue;
		}

		for (unsigned i = 0; i < ans.size(); i++) {
			cout << ans[ans.size() - 1 - i];
		}

		cout << endl;
	}

	return 0;
}