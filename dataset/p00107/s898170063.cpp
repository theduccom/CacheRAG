#include<iostream>

using namespace std;

typedef struct{
  int x;
  int y;
  int z;
}Cheeze;

double data[3];
Cheeze in;

void make(){
  data[0] = in.x*in.x + in.y*in.y;
  data[1] = in.y*in.y + in.z*in.z;
  data[2] = in.z*in.z + in.x*in.x;
}
int main(){
  
  while(cin >> in.x >> in.y >> in.z && in.z+in.y+in.z){
    make();
    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
      int hole_r;
      cin >> hole_r;
      int status = 0;
      for(int i = 0; i < 3; i++){
	if(data[i] < 4*hole_r*hole_r) status = 1;
      }
      if(status) cout << "OK" << endl;
      else cout << "NA" << endl;
    }
  }
  return 0;
}