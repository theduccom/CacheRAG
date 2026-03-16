#include<iostream>

using namespace std;

int main(){

  int data[15][15], x, y, size, sum = 0, max = 0;
  char trash[2];


  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      data[i][j] = 0;
    }
  }


  while(cin >> x >> trash[0] >> y >> trash[1] >> size){

    if(size == 1){

      data[x][y]++;
      data[x][y-1]++;
      data[x-1][y]++;
      data[x+1][y]++;
      data[x][y+1]++;

    }else if(size == 2){

      data[x][y]++;
      data[x][y-1]++;
      data[x-1][y]++;
      data[x+1][y]++;
      data[x][y+1]++;
      data[x-1][y-1]++;
      data[x+1][y-1]++;
      data[x-1][y+1]++;
      data[x+1][y+1]++;

    }else{

      data[x][y]++;
      data[x][y-1]++;
      data[x-1][y]++;
      data[x+1][y]++;
      data[x][y+1]++;
      data[x-1][y-1]++;
      data[x+1][y-1]++;
      data[x-1][y+1]++;
      data[x+1][y+1]++;
      data[x-2][y]++;
      data[x+2][y]++;
      data[x][y+2]++;
      data[x][y-2]++;

      
 
    }
  }


  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if(data[i][j] == 0){
	sum++;
      }
      if(data[i][j] > max){
	max = data[i][j];
      }
    }
  }

  cout << sum << endl << max << endl;

  return 0;

}