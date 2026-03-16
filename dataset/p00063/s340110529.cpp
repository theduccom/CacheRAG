#include <string>
#include <iostream>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const double EPS = 1e-9;


int main(){
	string s, rs;

	int count = 0;
	while(cin >> s){
		rs = s;
		reverse(rs.begin(), rs.end());

		if(rs == s){
			count++;
		}
	}

	cout << count << endl;

    return 0;
}