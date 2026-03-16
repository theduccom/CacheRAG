#include<iostream>
#include<string>
#include<vector>
#define N 12

using namespace std;

void Island1(vector<string>&, int, int);
void Island2(vector<string>&, int, int);

int main(){
  int i, j, count;
  string s;
  vector<string> data;

  while(cin >> s){
    data.push_back(s);
    for(i=1; i<N; ++i){
      cin >> s;
      data.push_back(s);
    }

    for(i=0, count = 0; i<N; ++i){
      for(j=0; j<N; ++j){
	if(data[i][j] == '1'){
	  Island1(data, i, j);
	  ++count;
	}
      }
    }

    cout << count << endl;
    data.clear();
  }

  return 0;
}

void Island1(vector<string>& data, int i, int j){
  data[i][j] = '2';
  Island2(data, i-1, j);
  Island2(data, i+1, j);
  Island2(data, i, j-1);
  Island2(data, i, j+1);
}

void Island2(vector<string>& data, int i, int j){
  if(i > -1 && i < N && j > -1 && j < N && data[i][j] == '1')
    Island1(data, i, j);
}