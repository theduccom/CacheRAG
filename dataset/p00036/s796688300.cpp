#include <iostream>
#include <utility>
using namespace std;
typedef pair<int,int> P;
int main(){
	int a;
	char board[8][9];
	P l[4];
	while(cin >> board[0]){
		a = 0;
		for(int i = 1;i < 8;++i){
			cin >> board[i];
		}
		for(int i = 0;i < 8;++i){
			for(int j = 0;j < 8;++j){
				if(board[i][j] == '1'){
					l[a].first = j;
					l[a].second = i;
					++a;
				}
			}
		}
		if(l[3].first - l[0].first == 3){
			cout << 'C' << endl;
		}
		else if(l[3].second - l[0].second == 3){
			cout << 'B' << endl;
		}
		else if(l[3].second - l[0].second == l[3].first - l[0].first){
			cout << 'A' << endl;
		}
		else if(l[0].first == l[3].first){
			cout << 'G' << endl;
		}
		else if(l[3].first - l[0].first == 2){
			cout << 'E' << endl;
		}
		else if(l[3].first - l[0].first == -1){
			cout << 'D' << endl;
		}
		else cout << 'F' << endl;
	}
	return 0;
}