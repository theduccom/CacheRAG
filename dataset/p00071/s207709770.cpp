#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
  int c;
  cin >> c;
  for (int cc = 1; cc <= c; cc++){
    vector<vector<int> > m(8, vector<int>(8, 0));
    for (int i = 0; i < 8; i++){
      for (int j = 0; j < 8; j++){
        char temp;
        cin >> temp;
        if (temp == '0'){
          m[i][j] = 0;
        }else{
          m[i][j] = 1;
	}
      }
    }
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    vector<pair<int,int> > q;
    q.push_back(pair<int,int>(x,y));
    while(q.size() > 0){
      pair<int,int> next = q[q.size()-1];
      q.pop_back();
      m[next.second][next.first] = 0;
      for (int i = -3; i <= 3; i++){
        if (i == 0){
          continue;
        }
        int bx = next.first+i;
        int by = next.second;
        if ((0 <= bx) && (bx < 8) && (0 <= by) && (by < 8)){
          if (m[by][bx] == 1){
            q.push_back(pair<int,int>(bx,by));
	  }
          m[by][bx] = 0;
	}
        bx = next.first;
        by = next.second+i;
        if ((0 <= bx) && (bx < 8) && (0 <= by) && (by < 8)){
          if (m[by][bx] == 1){
            q.push_back(pair<int,int>(bx,by));
	  }
          m[by][bx] = 0;
	}
      }
    }
    cout << "Data " << cc << ":" << endl;
    for (int i = 0; i < 8; i++){
      for (int j = 0; j < 8; j++){
        cout << m[i][j];
      }
      cout << endl;
    }
  }
  
}