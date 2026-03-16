#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>	// require sort next_permutation count etc.
#include <cstdlib>	// require abs
#include <cstdio>	// require printf
#include <functional>
#include <numeric>	// require accumulate
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <iomanip>	// require setw
#include <sstream>	// require stringstream 
#include <cstring>	// require memset
#include <cctype>	// require tolower, toupper
#include <fstream>	// require freopen

using namespace std;
typedef pair<int, int> P;
int maze[100][100];
bool used[100][100];
int main()
{
	const int dir[][2] = { { -1, 0 }, { 0, 1 }, { 1, 0 }, { 0, -1 } };
//	cut here before submit 
//	freopen ("testcase.block", "r", stdin );
	int w, h;

	while (cin >> w >> h && w && h ){
		memset (maze, 0, sizeof(maze ) );
		memset (used, false, sizeof (used ) );

		P start, goal;
		cin >> start.first >> start.second;
		start.first--; start.second--;
		cin >> goal.first >> goal.second;
		goal.first--; goal.second--;
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i ){
			int color, dir;
			P block;
			cin >> color >> dir >> block.first >> block.second;
			block.first--; block.second--;
			if (dir == 0 ){
				for (int col = 0; col < 4; ++col ){
					maze[block.second][block.first+col] = color;
					maze[block.second+1][block.first+col] = color;
				} // end for
			}else{
				for (int row = 0; row < 4; ++row ){
					maze[block.second+row][block.first] = color;
					maze[block.second+row][block.first+1] = color;
				} // end for
			} // end if
		} // end for
		queue<P> que;
		que.push (P(start.first, start.second ) );
		int search_color = maze[start.second][start.first];
		bool found = false;

		while (!que.empty() ){
			P curr = que.front(); que.pop();
			int x = curr.first;
			int y = curr.second;
			if (x == goal.first && y == goal.second ){
				found = true;
				break;
			} // end if
			used[y][x] = true;
			for (int k = 0; k < 4; ++k ){
				int nx = x + dir[k][0];
				int ny = y + dir[k][1];
				if (nx < 0 || nx >= w || ny < 0 || ny >= h )
					continue;
				if ((maze[ny][nx] == search_color) && !used[ny][nx] ){
					P next; next.first = nx; next.second = ny;
					que.push (next );
				} // end if
			} // end for
		} // end while

		if (found )
			cout << "OK" << endl;
		else
			cout << "NG" << endl;
	} // end loop
		
	return 0;
}