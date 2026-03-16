#include<iostream>

using namespace std;

const int MAX = 12;

char data[MAX][MAX];

void solve(int i, int j){
  data[i][j] = '0';
  if(i+1 < MAX && data[i+1][j] == '1') solve(i+1,j);
  if(i-1 >= 0 && data[i-1][j] == '1') solve(i-1,j);
  if(j+1 < MAX && data[i][j+1] == '1') solve(i,j+1);
  if(j-1 >= 0 && data[i][j-1] == '1') solve(i,j-1);
  return;
}

int main(){
  int status = 0;
  while(1){
    // if(!getline(cin,data[0])) break;
    //for(int i = 1; i < MAX; i++) getline(cin,data[i]);
    for(int i = 0; i < MAX; i++)
      for(int j = 0; j < MAX; j++)
	if(!(cin >> data[i][j])){
	  status = 1;
	  break;
	}
    if(status) break;
    int sum = 0;
    for(int i = 0; i < MAX; i++){
      for(int j = 0; j < MAX; j++){
	if(data[i][j] == '1'){
	  sum++;
	  solve(i,j);
	}
      }
    }
    cout << sum << endl;
  }
  return 0;
}