#include<bits/stdc++.h>
using namespace std;

bool mp[8][8];


void Bomb(int x, int y){

  mp[y][x] = false;

  for(int i=1; i<=3; i++){

    if(x-i>=0 && mp[y][x-i]==true)Bomb(x-i,y);
    if(x+i< 8 && mp[y][x+i]==true)Bomb(x+i,y);
    if(y-i>=0 && mp[y-i][x]==true)Bomb(x,y-i);
    if(y+i< 8 && mp[y+i][x]==true)Bomb(x,y+i);

  } 

}


int main(){

  int n;
  int fx,fy;
  char c;

  cin >> n;

  for(int i=0; i<n; i++){

    for(int j=0; j<8; j++)for(int k=0; k<8; k++){cin>>c;mp[j][k]=c-'0';}

    cin >> fx>>fy;
    fx--; fy--;

    Bomb(fx,fy);

    cout << "Data " << i+1 << ':' << endl;
    for(int j=0; j<8; j++){
      for(int k=0; k<8; k++){
	cout << mp[j][k];
      }
      cout << endl;
    }

  }


  return 0;
}