#include <iostream>
using namespace std;

int cell[101][101];
int max_i, max_j;
int goal_i, goal_j;
bool ret;

void search(int i, int j, int c){
	if(i<1 || j<1 || i>max_i || j>max_j) return;
	if(cell[i][j]!=c) return;
	else cell[i][j] = 0;
	if(i==goal_i && j==goal_j){
		ret = true;
		return;
	}

	search(i+1, j, c);
	if(ret) return;
	search(i-1, j, c);
	if(ret) return;
	search(i, j+1, c);
	if(ret) return;
	search(i, j-1, c);
	return;
}

int main(){
	while(1){
		cin >> max_i >> max_j;

		if(!max_i && !max_j) break;

		int start_i, start_j;
		cin >> start_i >> start_j;
		cin >> goal_i >> goal_j;

		int n;
		cin >> n;

		for(int i=0;i<max_i;i++){
			for(int j=0;j<max_j;j++){
				cell[i][j] = 0;
			}
		}

		for(int k=0;k<n;k++){
			int c, vec, i, j;
			cin >> c >> vec >> i >> j;
			cell[i][j] = cell[i+1][j] = cell[i][j+1] = cell[i+1][j+1] = c;
			if(vec){
				cell[i][j+2] = cell[i][j+3] = cell[i+1][j+2] = cell[i+1][j+3] = c;
			}else{
				cell[i+2][j] = cell[i+3][j] = cell[i+2][j+1] = cell[i+3][j+1] = c;
			}
		}
		
		ret = false;
		if(cell[start_i][start_j]){
			search(start_i, start_j, cell[start_i][start_j]);
		}

		if(ret) cout << "OK" << endl;
		else cout << "NG" << endl;
	}
}