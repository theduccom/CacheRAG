#include <iostream>
#include <string>
#include <queue>
#include <map>

#define inRange(idx, hi, low) (low <= idx && idx < hi)

using namespace std;

typedef pair<string, int> Pair;

struct Puzzle {
	int count;
	int zero;
	string field;
};

void swap( string &str, int a, int b )
{
	char tmp = str[a];
	str[a] = str[b];
	str[b] = tmp;
}

map<string, int> field;

void search( void )
{
	int d[][4] = { { -1, 1, 4 }, { -1, 1, -4 } };
	string start = "01234567";
	Puzzle tmp;
	queue<Puzzle> q;
	int in = 0;
	field[start] = 0;
	tmp.count = tmp.zero = 0; tmp.field = start;
	q.push(tmp);
	while(!q.empty()) {
		tmp = q.front(); q.pop();
		for(int i=0; i < 3; ++i) {
			int idx = tmp.zero + d[tmp.zero/4][i];
			int hi = 8, low = 0;
			if		(tmp.zero < 4 && d[tmp.zero/4][i] == 1) hi = 4;
			else if	(tmp.zero > 3 && d[tmp.zero/4][i] ==-1) low= 4;
			if(inRange(idx, hi, low)) {
				Puzzle work = tmp;
				swap(work.field, tmp.zero, idx);
				if(!field.count(work.field)) {
					++work.count; work.zero = idx;
					q.push(work);
					field[work.field] = work.count;
				}
			}
		}
	}
}

int main( void )
{
	search();
	string input, str;
	while(cin >> input) {
		str += input;
		for(int i=0; i < 7; ++i) {
			cin >> input;
			str += input;
		}
		cout << field[str] << endl;
		str = "";
	}

	return 0;
}