#include<iostream>
#include<string>
#include<vector>
#define N 8

using namespace std;

int checkA(const vector<string>, int, int);
int checkB(const vector<string>, int, int);
int checkC(const vector<string>, int, int);
int checkD(const vector<string>, int, int);
int checkE(const vector<string>, int, int);
int checkF(const vector<string>, int, int);
int checkG(const vector<string>, int, int);

int main(){
  int i, j, isFound;
  string s;
  vector<string> data;

  while(cin >> s){
    data.push_back(s);

    for(i=1; i<N; ++i){
      cin >> s;
      data.push_back(s);
    }

    for(i=0, isFound=0; i<N; ++i){
      for(j=0; j<N; ++j){
        if(data[i][j] == '1'){
	  isFound = 1;
          break;
        }
      }
      if(isFound == 1) break;
    }

    if(checkA(data, i, j) == 1) cout << "A" << endl;
    else if(checkB(data, i, j) == 1) cout << "B" << endl;
    else if(checkC(data, i, j) == 1) cout << "C" << endl;
    else if(checkD(data, i, j) == 1) cout << "D" << endl;
    else if(checkE(data, i, j) == 1) cout << "E" << endl;
    else if(checkF(data, i, j) == 1) cout << "F" << endl;
    else if(checkG(data, i, j) == 1) cout << "G" << endl;

    data.clear();
  }

  return 0;
}

int checkA(const vector<string> data, int i, int j){
  int n, m;
  n = i + 1;
  m = j + 1;
  if(n < N && m < N){
    if(data[i][m] == '1' && data[n][j] == '1' && data[n][m] == '1')
      return 1;
  }
  return 0;
}

int checkB(const vector<string> data, int i, int j){
  int n;
  n = i + 3;

  if(n < N){
    if(data[i+1][j] == '1' && data[i+2][j] == '1' && data[n][j] == '1')
      return 1;
  }
  return 0;
}

int checkC(const vector<string> data, int i, int j){
  int n, m;
  n = j + 3;

  if(n < N){
    if(data[i][j+1] == '1' && data[i][j+2] == '1' && data[i][n] == '1')
      return 1;
  }
  return 0;
}

int checkD(const vector<string> data, int i, int j){
  int n, m;
  n = i + 2;
  m = j - 1;

  if(n < N && m >= 0){
    if(data[i+1][m] == '1' && data[i+1][j] == '1' && data[n][m] == '1')
      return 1;
  }
  return 0;
}

int checkE(const vector<string> data, int i, int j){
  int n, m;
  n = i + 1;
  m = j + 2;

  if(n < N && m < N){
    if(data[i][j+1] == '1' && data[n][j+1] == '1' && data[n][m] == '1')
      return 1;
  }
  return 0;
}

int checkF(const vector<string> data, int i, int j){
  int n, m;
  n = i + 2;
  m = j + 1;

  if(n < N && m < N){
    if(data[i+1][j] == '1' && data[i+1][m] == '1' && data[n][m] == '1')
      return 1;
  }
  return 0;
}

int checkG(const vector<string> data, int i, int j){
  int k, n, m;
  k = j - 1;
  n = i + 1;
  m = j + 1;

  if(k >= 0 && n < N && m < N){
    if(data[i][m] == '1' && data[n][k] == '1' && data[n][j] == '1')
      return 1;
  }
  return 0;
}