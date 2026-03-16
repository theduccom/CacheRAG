#include<iostream>
#include<string>
using namespace std;
int main(){
  int h,w;
  while(cin >>h>>w,h||w){
    int field[100][100] = {0};
    bool f[100][100] = {false};
    string s;
    for(int i=0; i<h; i++){
      cin >>s;
      for(int j=0; j<s.size(); j++){
	if(s[j] == '>'){field[i][j] = 1;}
	if(s[j] == 'v'){field[i][j] = 2;}
	if(s[j] == '<'){field[i][j] = 3;}
	if(s[j] == '^'){field[i][j] = 4;}
      }
    }
    int px, py;
    px = py = 0;
    for(;;){
      if(f[py][px]){cout <<"LOOP"<<endl;break;}
      f[py][px] = true;
      if(!field[py][px]){cout <<px<<" "<<py<<endl;break;}
      if(field[py][px] == 1){px++;}
      if(field[py][px] == 2){py++;}
      if(field[py][px] == 3){px--;}
      if(field[py][px] == 4){py--;}
    }
  }
  return 0;
}