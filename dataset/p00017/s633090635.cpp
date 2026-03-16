#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <string>
#include <climits>
#include <iomanip>
#include <utility>

#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define PRINT(STR) cout << (STR) << endl
#define DEBUG(X) cerr << X << " (" << __LINE__ << ", " << __func__ << " )" << endl;

typedef long long ll;
using namespace std;

int main() {
	cin.tie(0); //?????±?????????????????????
	ios::sync_with_stdio(false); //printf??¨??±??????????????????
	string str;
	while (getline(cin, str)) {
		for (int i = -26; i <= 26; i++) {
			string newstr = str;
			for (int j = 0; j < str.size(); j++) {
				if ('a' <= newstr[j] && newstr[j] <= 'z') {
					newstr[j] = str[j] + i;
					if (newstr[j] < 'a') {
						newstr[j] -= 'a';
						newstr[j] += 123;
					} else if (newstr[j] > 'z') {
						newstr[j] -= 'z' + 1;
						newstr[j] += 'a';
					}
				}
			}
			//cerr << newstr << endl;
			if (newstr.find("the", 0) != string::npos ||
					newstr.find("this", 0) != string::npos ||
					newstr.find("that", 0) != string::npos) {
				cout << newstr << endl;
				break;
			}
		}
	}
	return 0;
}