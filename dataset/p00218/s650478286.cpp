#include<iostream>

using namespace std;

int main(){

  int in, math, eng, jap;

  while(1){

    cin >> in;

    if(in == 0) break;

    for(int i = 0; i < in; i++){
      cin >> math >> eng >> jap;

      if(math == 100 || eng == 100 || jap == 100){
	cout << "A";
      }else if((math + eng) / 2 >= 90){
	cout << "A";
      }else if((math + eng + jap) / 3 >= 80){
	cout << "A";
      }else if((math + eng + jap) / 3 >= 70){
	cout << "B";
      }else if((math + eng + jap) / 3 >= 50 && math >= 80){
	cout << "B";
      }else if((math + eng + jap) / 3 >= 50 && eng >= 80){
	cout << "B";
      }else{
	cout << "C";
      }
      cout << endl;
    }
  }

  return 0;
}