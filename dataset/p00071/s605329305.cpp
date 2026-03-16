#include<iostream>
#include<queue>

using namespace std;

int main(){

  char data[15][15];
  int n;

  cin >> n;

  for(int i = 0; i < 15; i++){
    for(int j = 0; j < 15; j++){
      data[i][j] = '0';
    }
  }
  for(int i = 0; i < n; i++){

    for(int j = 4; j <= 11; j++){
      for(int k = 4; k <= 11; k++){
	cin >> data[k][j];
      }
    }

    int x, y;
    cin >> x >> y;
    //cout << x <<' ' << y << endl;
    queue<int> X;
    queue<int> Y;
    X.push(x+3);
    Y.push(y+3);

    while(!X.empty()){
      x = X.front();
      y = Y.front();
      X.pop();
      Y.pop();
      //cout << x <<' ' << y << "data = " << data[x+3][y+3] << endl;
      data[x][y] = '0';
      for(int j = x+1; j < x+4; j++){
	if(data[j][y] == '1'){
	  X.push(j);
	  Y.push(y);
	}
	data[j][y] = '0';
      }
      for(int j = y+1; j < y+4; j++){
	if(data[x][j] == '1'){
	  X.push(x);
	  Y.push(j);
	}
	data[x][j] = '0';
      }

      for(int j = x-1; j > x-4; j--){
	if(data[j][y] == '1'){
	  X.push(j);
	  Y.push(y);
	}
	data[j][y] = '0';
      }
      for(int j = y-1; j > y-4; j--){
	if(data[x][j] == '1'){
	  X.push(x);
	  Y.push(j);
	}
	data[x][j] = '0';
      }
    }
    cout << "Data" << " " << i+1 << ":" <<endl;
    for(int j = 4; j <= 11; j++){
      for(int k = 4; k <= 11; k++){
	cout <<  data[k][j];
      }
      cout << endl;
    }
  }
  return 0;
}