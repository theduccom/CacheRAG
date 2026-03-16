#include<iostream>
#include<cmath>
#include<vector>
#define N 50030

using namespace std;

int main(){
  int i, j, n, isFound, count;
  vector<int> data;

  data.push_back(2);
  data.push_back(3);
  for(i=5; i<=N; i+=2){
    for(j=1, isFound=0; data[j]<=sqrt(i); ++j){
      if(i%data[j] == 0){
	isFound = 1;
	break;
      }
    }
    if(isFound == 0) data.push_back(i);
  }

  while(cin >> n){
    for(i=0; i<data.size(); ++i){
      if(n < data[i]) break;
    }

    if(n == data[i-1])
      cout << data[i-2] << " " << data[i] << endl;
    else
      cout << data[i-1] << " " << data[i] << endl;
  }

  return 0;
}