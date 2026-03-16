#include <cmath>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <queue>
#include <complex>
#include <climits>

typedef long long ll;

using namespace std;

int main(void){
	int N;
	int pos;
	string s;
	cin >> N;
	cin.ignore();
	for(int i=0; i<N; ++i){
		getline(cin, s);
		while(1){
			pos = s.find("Hoshino");
			if(pos == -1) break;
			s[pos+6] = 'a';
		}
		cout << s << endl;
	}
	return 0;
}