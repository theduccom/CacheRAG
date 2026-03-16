#include <iostream>
#include <vector>

using namespace std;

int main(){
	int w, h;
	char room[101][101];
	vector< pair<int, int> > visited;
	while(cin >> h >> w, h || w){
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				cin >> room[i][j];
			}
		}
		visited.push_back(pair<int, int>(0, 0));
		int flag = 1;
		while (flag){
			pair<int, int> tmp;
			switch (room[visited.back().first][visited.back().second])
			{
			case '>':
				tmp.first = visited.back().first;
				tmp.second = visited.back().second + 1;
				visited.push_back(tmp);
				break;
			case '<':
				tmp.first = visited.back().first;
				tmp.second = visited.back().second - 1;
				visited.push_back(tmp);
				break;
			case '^':
				tmp.first = visited.back().first - 1;
				tmp.second = visited.back().second;
				visited.push_back(tmp);
				break;
			case 'v':
				tmp.first = visited.back().first + 1;
				tmp.second = visited.back().second;
				visited.push_back(tmp);
				break;
			case '.':
				cout << visited.back().second << ' ' << visited.back().first << endl;
				flag = 0;
				visited.clear();
				break;
			}
			for (int i = visited.size() - 2; i >= 0; i--){
				if (visited[i] == tmp){
					cout << "LOOP" << endl;
					flag = 0;
					break;
				}
			}
		}
		visited.clear();
	}
	return 0;
}