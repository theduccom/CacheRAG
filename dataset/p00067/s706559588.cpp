#include<iostream>
#include<queue>
#include<map>
#include<string>
#include<string.h>
using namespace std;

int island[12][12];
bool visited[12][12];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  string s;
  while(cin>>s) {
    memset(island, 0, sizeof(island));

    for(int i=0; i<12; ++i)
      if(s[i] == '1') island[0][i] = 1;

    for(int i=0; i<11; ++i) {
      cin>>s;
      for(int j=0; j<12; ++j) {
	if(s[j] == '1') island[i+1][j] = 1;
      }
    }

    int ans = 0;
    for(int i=0; i<12; ++i) {
      for(int j=0; j<12; ++j) {
	if(island[i][j] == 1) {
	  ans++;
	  queue< pair<int,int> > Q;
	  Q.push(pair<int,int>(i,j));
	  while(!Q.empty()) {
	    pair<int,int> p = Q.front(); Q.pop();
	    int x = p.first,y = p.second;
	    island[x][y] = 2;
	    for(int k=0; k<4; ++k) {
	      if(x+dx[k] >= 0 && x+dx[k] < 12 && y+dy[k] >= 0
		 && y+dy[k] < 12 && island[x+dx[k]][y+dy[k]] == 1)
		Q.push(pair<int,int>(x+dx[k],y+dy[k]));
	    }
	  }
	}
      }
    }

    cout<<ans<<endl;
  }
}