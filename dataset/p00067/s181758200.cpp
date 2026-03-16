#include <iostream>

using namespace std;

bool input(bool board[][12])
{
	char buf[13];
	for (int i=0; i<12; i++) {
		if ( !(cin >> buf) ) return false;
		for (int j=0; j<12; j++) board[i][j] = buf[j] - '0';
	}
	return true;
}

void DFS(bool board[][12], int comp[][12], int comp_num, pair<int, int> pos)
{
	int i = pos.first;
	int j = pos.second;
	
	if (comp[i][j] == comp_num) return;
	comp[i][j] = comp_num;
	
	if (i>0  && board[i-1][j] && comp[i-1][j]==0) DFS(board, comp, comp_num, pair<int,int>(i-1,j) );
	if (i<11 && board[i+1][j] && comp[i+1][j]==0) DFS(board, comp, comp_num, pair<int,int>(i+1,j) );
	if (j>0  && board[i][j-1] && comp[i][j-1]==0) DFS(board, comp, comp_num, pair<int,int>(i,j-1) );
	if (j<11 && board[i][j+1] && comp[i][j+1]==0) DFS(board, comp, comp_num, pair<int,int>(i,j+1) );
}

int main()
{
	bool board[12][12];
	
	while ( input(board) ) {
		int component[12][12];
		for (int i=0; i<12; i++) {
			for (int j=0; j<12; j++) component[i][j] = 0;
		}
		
		int component_num = 0;
		
		for (int i=0; i<12; i++) {
			for (int j=0; j<12; j++) {
				if (!board[i][j]) continue;
				if (component[i][j] > 0) continue;
				component_num++;
				DFS( board, component, component_num, pair<int,int>(i,j) );
			}
		}
		cout << component_num << endl;
	}
	
	return 0;
}