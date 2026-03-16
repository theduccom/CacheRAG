
#include <iostream>
#include <vector>
using namespace std;

int  A[12][12];
int dx[] = {1,0,-1,0}, dy[] = {0,-1,0,1};

bool valid(int r, int c){
  return r >= 0 && r < 12 && c >= 0 && c < 12 && A[r][c];
}    

void dfs_rec(int r, int c){
  if(!A[r][c]) return ;
  A[r][c] = 0;
  for(int i=0; i<4; ++i){
    if(valid(r+dx[i], c+dy[i])) dfs_rec(r+dx[i], c+dy[i]);
  }
}

int main(){
  string row;
  while(cin >> row){
    for(int r=0; r<12; ++r){
      if(r != 0){
	cin >> row;
      }
      for(int c=0; c<12; ++c){
	A[r][c] = row[c] - '0';
      }
    }
    
    int sum = 0;
    for (int r=0; r<12; ++r) {
      for (int c=0; c<12; ++c) {
	if (A[r][c]) {
	  sum++;
	  dfs_rec(r, c);
	}
      }
    }

    cout << sum << endl;
  }

  return 0;
}