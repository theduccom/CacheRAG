#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

typedef pair < vector <int>, int> kotori;
const int INF = 1001001001;

map < vector <int>, int > memo;

void print(vector <int> arr)
{
	for (int i = 0; i < 8; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
bool last(vector <int> arr){
	for (int i = 0; i < 8; i++){
		if (arr[i] != i) return false;
	}
	return true;
}
void calc(void)
{
	queue <kotori> q;
	int pos;
	vector <int> ar(8);
	for (int i = 0; i < 8; i++){
		ar[i] = i;
	}
	q.push(make_pair(ar, 1));
	memo.clear();
	while (!q.empty()){
		kotori hanayo = q.front(); q.pop();
		vector <int> now = hanayo.first;
		int steps = hanayo.second;

		if (memo.count(now)) continue;
		// print(now);
		memo[now] = steps;

		for (int i = 0; i < 8; i++){
			if (now[i] == 0){
				if (0 <= i && i <= 3){
					pos = i + 4;
					swap(now[i], now[pos]);
					if (!memo.count(now)) q.push(make_pair(now, steps + 1));
					swap(now[i], now[pos]);
				}
				if (4 <= i && i <= 7){
					pos = i - 4;
					swap(now[i], now[pos]);
					if (!memo.count(now)) q.push(make_pair(now, steps + 1));
					swap(now[i], now[pos]);
				}
				if (i != 3 && i != 7){
					pos = i + 1;
					swap(now[i], now[pos]);
					if (!memo.count(now)) q.push(make_pair(now, steps + 1));
					swap(now[i], now[pos]);
				}
				if (i != 0 && i != 4){
					pos = i - 1;
					swap(now[i], now[pos]);
					if (!memo.count(now)) q.push(make_pair(now, steps + 1));
					swap(now[i], now[pos]);
				}
			}
		}
	}
}

int main(void)
{
	vector <int> arr(8);

	calc();
	// cout << "ok" << endl;
	while (1){
		for (int i = 0; i < 8; i++){
			cin >> arr[i];
			if (cin.eof()) return 0;
		}
		cout << memo[arr] - 1 << endl;
	}

	return 0;
}