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
#define MAX 987654321

using namespace std;

int dijkstra (vector <vector <int> > M, int curr, int target )
{
	int size = M.size();

	vector <bool> v(size, false );
	vector <int> len (size, MAX );
	vector <int> path (size, 0 );

	len[curr] = 0;
	path[curr] = -1;

	int minlen;
	int i,p;

	do{
		minlen = MAX;
		
		for (i = 0; i < size; ++i){
			if (!v[i] && len[i] < minlen ){
				minlen = len[i];
				p = i;
			} // end if
		} // end for

		v[p] = true;

		for (i = 0; i < size; ++i){
			if (M[p][i] + len[p] < len[i] ){
				len[i] = M[p][i] + len[p];
				path[i] = p;
			} // end if
		} // end for
	}while (minlen != MAX );

	return len[target];
}

int main()
{
//	cut here before submit 
//	freopen("testcase.reward", "r", stdin);
	string str = "";
	int n;			// XÌ
	int m;			// X¹Ì
	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;
	getline (cin, str );
	stringstream ssm(str);
	ssm >> m;

	int i;
	vector <vector <int> > M (n+1, vector <int> (n+1, MAX ) );


	for (i = 0; i < m; ++i){
		getline (cin, str );

		while (str.find(',') != string::npos ){
			str = str.replace(str.find(','), 1, " ");
		} // end while
		int from, to, costf, costr;
		stringstream ss(str);

		ss >> from >> to >> costf >> costr;
		M[from][to] = costf; M[to][from] = costr;

	} // end for

	getline (cin, str );
	while (str.find(',') != string::npos ){
		str = str.replace(str.find(','), 1, " ");
	} // end while
	stringstream ss (str );	

	int curr, target, money, tree;

	ss >> curr >> target >> money >> tree;

	int going = 0;
	int comeback = 0;

	going = dijkstra (M, curr, target );
	comeback = dijkstra (M, target, curr );
	
	int res = money - tree - going - comeback;

	cout << res << endl;

	return 0;
}