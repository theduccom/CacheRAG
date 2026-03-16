#include <iostream>
#include <queue>
#include <map>
#include <array>

using namespace std;

int way[4] = {-1, +4, +1, -4};

inline int xy2pos(int x, int y){
  return y*4 + x;
}

inline int pos2x(int pos){
  return pos % 4;
}

inline int pos2y(int pos){
  return pos / 4;
}

map<array<int, 8>, int> m;

void Solve(){
  queue<pair<array<int, 8>, int> > q;
  array<int, 8> a;
  for(int i=0; i<8; i++)
	a.at(i) = i;
  q.push(make_pair(a, 0));
  
  while(q.size()){
  	pair<array<int, 8>, int> p = q.front();
  	q.pop();

  	if(m.find(p.first) != m.end()){
  	  continue;
  	}

  	m.insert(make_pair(p.first, p.second));

  	int pos_0;
  	for(int i=0; i<8; i++){
  	  pos_0 = (p.first[i] == 0) ? i : pos_0;
  	}
	
  	for(int i=0; i<4; i++){
  	  int npos = pos_0 + way[i];
  	  if(npos < 0 || npos >= 8 ||
  		 (pos_0 == 3 && npos == 4) || (pos_0 == 4 && npos == 3)){
  		continue;
  	  }
  	  swap(p.first[pos_0], p.first[npos]);
  	  q.push(make_pair(p.first, p.second + 1));
  	  swap(p.first[pos_0], p.first[npos]);	  
  	}
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  Solve();
  while(1){
	array<int, 8> a;
	cin >> a.at(0);
	if(cin.eof()){
	  return 0;
	}
	for(int i=1; i<8; i++){
	  cin >> a.at(i);
	}
	cout << m.at(a) << endl;
  }
}