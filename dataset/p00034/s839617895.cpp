#include<iostream>

using namespace std;

int data[10];

int main(){
  while(cin >> data[0]){
    double sum = data[0];
    char trash;
    cin >> trash;
    for(int i = 1; i < 10; i++){
      cin >> data[i] >> trash;
      sum += data[i];
      data[i] = sum;
    }
    int v[2];
    cin >> v[0] >> trash >> v[1];
    v[1] += v[0];
    sum /= v[1];
    sum *= v[0];
    int max = 0;
    for(int i = 0; i < 10; i++){
      if(sum <= data[i]){
	max = i+1;
	break;
      }
    }
    cout << max << endl;
  }
  return 0;
}