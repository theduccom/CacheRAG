#include<iostream>

using namespace std;

int main(){

  int sum[10], in, num;

  while(1){

    cin >> in;

    if(in == 0) break;

    for(int i = 0; i < 10; i++){
      sum[i] = 0;
    }


    for(int i = 0; i < in; i++){
      cin >> num;
      sum[num]++;
    }


    for(int i = 0; i < 10; i++){
      if(sum[i] == 0) cout << "-";
      else{
	for(int j = 0; j < sum[i]; j++){
	  cout << "*";
	}
      }
      cout << endl;
    }


  }

  return 0;
}