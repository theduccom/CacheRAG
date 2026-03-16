#include<iostream>
#include<string>
#include<vector>
#define N 8

using namespace std;

void BombsChain(vector<string>&, int, int);
void CheckBombs(vector<string>&, int, int);

int main(){
  int i, j, n, x, y;
  string s;
  vector<string> data;

  cin >> n;

  for(i=0; i<n; ++i){
    for(j=0; j<N; ++j){
      cin >> s;
      data.push_back(s);
    }

    cin >> x >> y;
    BombsChain(data, y-1, x-1);

    cout << "Data " << i+1 << ":" << endl;
    for(j=0; j<data.size(); ++j)
      cout << data[j] << endl;

    data.clear();
  }

  return 0;
}

void BombsChain(vector<string>& data, int i, int j){
  data[i][j] = '0';

  CheckBombs(data, i-3, j);
  CheckBombs(data, i-2, j);
  CheckBombs(data, i-1, j);

  CheckBombs(data, i+3, j);
  CheckBombs(data, i+2, j);
  CheckBombs(data, i+1, j);

  CheckBombs(data, i, j-3);
  CheckBombs(data, i, j-2);
  CheckBombs(data, i, j-1);

  CheckBombs(data, i, j+3);
  CheckBombs(data, i, j+2);
  CheckBombs(data, i, j+1);
}

void CheckBombs(vector<string>& data, int i, int j){
  if(i > -1 && i < N && j > -1 && j < N && data[i][j] == '1')
    BombsChain(data, i, j);
}