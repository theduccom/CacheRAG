#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <list>
#include <iomanip>

using namespace std;

int main(){
	string s;
	while(cin>>s){
		string out;
		for (int i = 0; i < (int)s.size(); i++){
			if(s[i] != '@'){ out.push_back(s[i]); continue;}
			for (int j = 0; j < s[i+1] - '0'; j++){
				out.push_back(s[i+2]);
			}
			i+=2;
		}
		cout << out << endl;
	}
    return 0;
}