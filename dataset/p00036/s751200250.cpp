#include<iostream>

using namespace std;

int main(){

  while(1){

    int data[15][15];
    char in;
    for(int i = 0; i < 15; i++){
      for(int j = 0; j < 15; j++){
	data[i][j] = 0;
      }
    }
    for(int i = 3; i < 11; i++){
      for(int j = 3; j < 11; j++){
	if(cin >> in){
	  if(in == '1'){
	    data[i][j] = 1;
	  }
	}else{
	  return 0;
	}
      }
    }
    int x,y,status = 0;
    
    for(int i = 3; i < 11; i++){
      for(int j = 3; j < 11; j++){
	if(data[i][j] == 1){
	  x = i;
	  y = j;
	  status = 1;
	  break;
	}
      }
      if(status == 1) break;
    }
    
    if(data[x+1][y] == 1 && data[x][y+1] && data[x+1][y+1]) cout << "A" <<endl;
    else if(data[x+1][y] == 1 && data[x+2][y] == 1 && data[x+3][y] == 1) cout << "B" <<endl;
    else if(data[x][y+1] ==1 && data[x][y+2] ==1 &&data[x][y+3] ==1) cout << "C" << endl;
    else if(data[x+1][y] ==1 && data[x+1][y-1] ==1 && data[x+2][y-1] ==1) cout << "D" << endl;
    else if(data[x][y+1] ==1 && data[x+1][y+1] ==1 && data[x+1][y+2] ==1) cout << "E" << endl;
    else if(data[x+1][y] ==1 && data[x+1][y+1] ==1 && data[x+2][y+1] ==1) cout << "F" << endl;
    else if(data[x][y+1] ==1 && data[x+1][y] ==1 && data[x+1][y-1] ==1) cout << "G" << endl;
  }
  return 0;
}