#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

int main() {
	for (string s; getline(cin, s);) {
		string t;
		for (int j = 0; j < 26; j++) {
			t = "";
			for (int i = 0; i < s.size(); i++) {
				if (s[i] >= 'a'&&s[i] <= 'z') {
					if (s[i] + j > 'z')t += s[i] + j - 26;
					else t += s[i] + j;
				}
				else
					t += s[i];
			}
			if (t.find("the") != string::npos)break;
			if (t.find("this") != string::npos)break;
			if (t.find("that") != string::npos)break;
		}
		cout << t << endl;
	}
	return 0;
}