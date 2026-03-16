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
	string str = "";
	map <string, set<int> > Index;

	while (getline (cin, str ) ){

		string word = "";
		int page = 0;

		stringstream ss(str);
		ss >> word >> page;

		Index[word].insert (page );

	} // end loop

	map <string, set<int> >::iterator it = Index.begin();

	for (; it != Index.end(); ++it){

		string w = (*it).first;
		cout << w << endl;
	
		set<int>::iterator its = Index[w].begin();
		int n = Index[w].size();

		for (int i = 0; its != Index[w].end(); ++its, ++i){
			cout << (*its);
			if (i != n - 1){
				cout << ' ';
			} // end if
		} // end for

		cout << endl;	

	} // end for

	return 0;
}