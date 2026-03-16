#include<iostream>

using namespace std;

int main(){

  int start, end;

  int roll = 0;

  while(cin >> start >> end){
    if(start == 0 && end == 0) break;
    if(roll != 0) cout << endl;
    int sum = 0;

    for(int i = start; i <= end; i++){
      if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
	cout << i << endl;
	sum++;
      }
    }
    if(sum == 0) cout << "NA" << endl;
    roll++;
  }

  return 0;
}