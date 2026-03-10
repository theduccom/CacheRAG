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
	int i,j;

	for (i = 1; i <= 9; ++i){
		for (j = 1; j <= 9; ++j){
			cout << i << 'x' << j << '=' << i*j << endl;
		} // end for
	} // end for
		
	return 0;
}