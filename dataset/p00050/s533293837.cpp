#include <string>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <utility>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <iterator>
#include <sstream>

using namespace std;

int main()
{
	string s; getline(cin,s);
	int i = 0;
	while(i < (int)s.size()){
		int ap = s.find("apple",i);
		int pe = s.find("peach",i);
		if(ap == string::npos && pe == string::npos) break;
		bool a = true;
		if(ap == string::npos || (pe != string::npos && ap > pe)) a= false;
		if(a){
			s.replace(ap,5,"peach");
			i = ap + 5;
		} else {
			s.replace(pe,5,"apple");
			i = pe + 5;
		}
	}
	cout << s << endl;

	return 0;
}