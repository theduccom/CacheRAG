#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>
using namespace std;

int main()
{
	const string event[] = { "HIT", "OUT", "HOMERUN" };
//	cut here before submit 
//	freopen("testcase.baseball2", "r", stdin);
	string str = "";
	int n;

	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;
	queue <char> stat;

	int score = 0;
	int out = 0;
	int count = 0;
	int i;
	while (getline (cin, str ) ){
		
		for (i = 0; i < sizeof(event)/sizeof(event[0]); ++i){
			if (str == event[i]){
				switch(i){
					case 0:
						stat.push ('R');
						break;
					case 1:
						++out;
						break;
					case 2:
						int runner = 0;
						while (!stat.empty() ){
							char c = stat.front();
							if (c == 'R'){
								++runner;
							} // end if
							stat.pop();
						} // end while
						score += runner + 1;
						break;
				} // end switch
				break;
			} // end if
		} // end for
		if (out == 3){
			cout << score << endl;
			score = 0;
			out = 0;
			while (!stat.empty() ){
				stat.pop();
			} // end while
			++count;
		} // end if
		if (stat.size() == 4){
			if (stat.front() == 'R'){
				++score;
			} // end if
			stat.pop();
		} // end if
		if (count == n){
			break;
		} // end if
	} // end loop

//	cout << res << endl;	
		
	return 0;
}