#include<iostream>
#include<string>
using namespace std;

char ma[100][100];
bool visited[100][100];

int main() {
  int w,h;
  string s;
  while(cin>>w>>h, w|h) {
    for(int i=0; i<w; ++i) {
      cin>>s;
      for(int j=0; j<h; ++j) {
	ma[i][j] = s.at(j);
	visited[i][j] = false;
      }
    }

    int nx=0, ny=0;
    while(1) {
      if(visited[nx][ny]) {
	cout<<"LOOP"<<endl;
	break;
      }
      visited[nx][ny] = true;
      if(ma[nx][ny] == '.') {
	cout<<ny<<" "<<nx<<endl;
	break;
      }
      if(ma[nx][ny] == '>') ny++;
      if(ma[nx][ny] == '<') ny--;
      if(ma[nx][ny] == '^') nx--;
      if(ma[nx][ny] == 'v') nx++;
    }
  }
}