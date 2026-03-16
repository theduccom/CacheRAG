#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <sstream>	// require stringstream 
//#include <fstream>	// require freopen

using namespace std;

map <vector <int>, int > hand;

void bfs (void )
{
	vector <int> number (8, 0 );
	for (int i = 0; i < 8; ++i ){
		number[i] = i;
	} // end for

	const int dir[][2] = { {-1,0}, {0,1}, {1,0}, {0,-1} };


	queue<vector <int> > que;
	
	que.push (number );

	hand[number] = 0;

	while (!que.empty() ){
		vector <int> curr = que.front(); que.pop();

		int row, col;
		for (int i = 0; i < 8; ++i ){
			if (curr[i] == 0 ){
				row = i/4; col = i%4;
				break;
			} // end if
		} // end for
		for (int k = 0; k < 4; ++k ){		
			int nrow = row + dir[k][0];
			int ncol = col + dir[k][1];
			if (nrow < 0 || nrow >= 2 || ncol < 0 || ncol >= 4 ){
				continue;
			} // end if		
			vector <int> next = curr;
			swap (next[row*4 + col], next[nrow*4 + ncol] );
			if (hand.find (next) == hand.end() ){
				que.push (next );
				hand[next] = hand[curr] + 1;
			} // end if
		} // end for
	} // end while
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.sevenpuzzle", "r", stdin );
	string str = "";

	bfs ();
	while (getline (cin, str ) ){

		vector <int> start (8, 0 );
		stringstream ss(str);

		for (int i = 0; i < 8; ++i ){
			ss >> start[i];
		} // end for
		cout << hand[start] << endl;

	} // end loop
		
	return 0;
}