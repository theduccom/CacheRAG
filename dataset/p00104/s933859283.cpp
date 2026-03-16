#include <iostream>
using namespace std;
int px,py; 
int w,h,f[100][100];
 
bool cheak(){
  if(f[px][py] == 0){
    cout << "LOOP" << endl;
    return true;
  }
  return false;
}
 
int main(){
 
  char ma[100][100];
  while(  cin >> h >> w,w + h ){
    for(int i = 0 ; i < h ; i++){
      for(int j = 0 ; j < w ; j++){
    cin >> ma[j][i];
    f[j][i] = 1;
      }
    }
 
    px = 0,py = 0; 
    while(1){
      if(ma[px][py] == '>' ){
    px++;
    if(cheak())break;
      } else if(ma[px][py] == 'v' ){
    py++;
    if(cheak())break;
      }else if(ma[px][py] == '<' ){
    px--;
    if(cheak())break;
      }else if(ma[px][py] == '^' ){
    py--;
    if(cheak())break;
      } else {
    cout << px << " " << py << endl;
    break;
      }
      f[px][py] = 0;
    }
  }
}