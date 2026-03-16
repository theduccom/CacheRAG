#include<iostream>
using namespace std;
int main(){
  double v,y,t;
  int n,h[1000];
  for(int i=0; i<1000; i++)
    h[i] = i*5-5;
  while(cin >> v){
    t = v/9.8;
    y = 4.9 * t * t;
    for(int j=0; j<1000; j++){
      if(h[j] >= y){
	cout << j << endl;
	break;
      }
    }
  }
}