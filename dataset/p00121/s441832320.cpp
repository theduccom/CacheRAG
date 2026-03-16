#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;

map < vector <int>, int > memo;
vector <int> puzzle;
vector <int> dist[8];
int a;

bool check(vector <int> vi)
{
	for (int i = 0; i < vi.size(); i++){
		if (vi[i] != i) return false;
	}
	return true;
}

void calc(void)
{
	for (int i = 0; i < 8; i++){
		puzzle.push_back(i);
	}

	queue < pair < vector <int>, int> > q;
	q.push(make_pair(puzzle, 0));

	while (!q.empty()){
		pair <vector <int>, int> now = q.front();
		vector <int> __puzzle = now.first;
		q.pop();
		memo[__puzzle] = now.second;

		// for (int k = 0; k < 8; k++) cout << __puzzle[k] << " ";
		// cout << "  memo! " << now.second << " " << endl;
		// cout << q.size() << endl;
		// cin >> a;

		for (int i = 0; i < 8; i++){
			if (__puzzle[i] == 0){
				for (int j = 0; j < dist[i].size(); j++){
					swap(__puzzle[i], __puzzle[dist[i][j]]);
					if (memo.count(__puzzle) == 0){
						q.push(make_pair(__puzzle, now.second + 1));
					}
					swap(__puzzle[i], __puzzle[dist[i][j]]);
				}
			}
		}
	}

	return;
}

void init(void)
{
	dist[0].push_back(1);
	dist[0].push_back(4);
	
	dist[1].push_back(0);
	dist[1].push_back(2);
	dist[1].push_back(5);
	
	dist[2].push_back(1);
	dist[2].push_back(3);
	dist[2].push_back(6);
	
	dist[3].push_back(2);
	dist[3].push_back(7);

	dist[4].push_back(0);
	dist[4].push_back(5);

	dist[5].push_back(1);
	dist[5].push_back(4);
	dist[5].push_back(6);

	dist[6].push_back(2);
	dist[6].push_back(5);
	dist[6].push_back(7);

	dist[7].push_back(3);
	dist[7].push_back(6);
}

int main(void)
{
	init();
	calc();
	while (1){
		puzzle.clear();
		for (int i = 0; i < 8; i++){
			cin >> a;
			puzzle.push_back(a);
		}
		if (cin.eof()) return 0;

		// cout << memo.count(puzzle) << endl;
		cout << memo[puzzle] << endl;
	}

	return 0;
}