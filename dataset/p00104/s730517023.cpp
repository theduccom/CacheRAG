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
	enum { NOTHING, EAST, WEST, NORTH, SOUTH };
	string str = "";

	while (getline (cin, str ) ){

		int h, w;
		stringstream ssn(str);
		ssn >> h >> w;

		if (h == 0 && w == 0){
			break;
		} // end if

		vector<vector <int> > m (h, vector <int> (w, 0 ) );
		vector<vector <bool> > v (h, vector <bool> (w, false ) );
		int i,j;

		for (i = 0; i < h; ++i ){

			getline (cin, str );

			for (j = 0; j < w; ++j ){
				char c = str[j];
				switch (c){
					case '.': m[i][j] = NOTHING; break;
					case '^': m[i][j] = NORTH; break;
					case '>': m[i][j] = EAST; break;
					case 'v': m[i][j] = SOUTH; break;
					case '<': m[i][j] = WEST; break;
				} // end switch
			} // end for
		} // end for

		int currx = 0;
		int curry = 0;

		while (!v[curry][currx] && m[curry][currx] != NOTHING ){

 			v[curry][currx] = true;
			int d = m[curry][currx];

			switch (d){
				case NORTH: --curry; break;
				case SOUTH: ++curry; break;
				case EAST:  ++currx; break;
				case WEST:  --currx; break;
			} // end switch
		} // end while

		if (!v[curry][currx]){
			cout << currx << ' ' << curry << endl;
		}else{
			cout << "LOOP" << endl;
		} // end if

	} // end loop

	return 0;
}