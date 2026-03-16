#include <iostream>
#include <queue>
#include <vector>
#include <map>

#define COL 12
#define ROW 12
using namespace std;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

bool input(vector< vector<char> > &m);
void delete_island(vector< vector< char > > &m, int x, int y);


int main(){
  vector< vector< char > > m(COL+2, vector<char>(ROW+2, '0'));
  
  while(input(m)){
    int island = 0;
    for(int y = 0; y < m.size(); y++){
      for(int x = 0; x < m[y].size(); x++){
	if(m[y][x] == '1'){
	  delete_island(m,x,y);
	  island++;
	}
      }
    }
    cout << island << endl;
  }
}


bool input(vector< vector<char> > &m){
  for(int y = 0; y < m.size(); y++){
    for(int x = 0; x < m[y].size(); x++){
      if(y == 0 || x == 0 ||
	 y == m.size()-1 || x == m.size()-1){
	m[y][x] = '0';
      }else{
	if(!(cin >> m[y][x])) return false;
      }
    }
  }
  return true;
}


 void delete_island(vector< vector< char > > &m, int x, int y){
   queue< pair< int, int > > q;
   q.push(make_pair(x,y));

   while(!(q.empty())){
     pair<int, int> cur = q.front();
     q.pop();
     if(m[cur.second][cur.first] == '1'){
       m[cur.second][cur.first] = '0';
       for(int i = 0; i < 4; i++){
	 q.push(make_pair(cur.first+dx[i],cur.second+dy[i]));
       }
     }
   }
}