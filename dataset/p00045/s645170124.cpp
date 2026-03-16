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
//	cut here before submit 
//	freopen("testcase.saa", "r", stdin);
	string str = "";
	int total = 0;
	int sum = 0;
	int avg = 0;
	int count = 0;
	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if
		++count;
		while (str.find(',') != string::npos ){
			str = str.replace(str.find(','), 1, " ");
		} // end while
		stringstream ss(str);
		int price, num;
		ss >> price >> num;
		total += price*num;
		sum += num;
	} // end for
	avg = (int)((double)sum/(double)count + 0.5);
	cout << total << endl;
	cout << avg << endl;
		
	return 0;
}