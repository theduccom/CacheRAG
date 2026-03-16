#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

vector<int> MakePrimeNumber(int);

int main(){
  int i, n;
  double sum;
  vector<int> data;

  data = MakePrimeNumber(110000);

  while(1){
    cin >> n;
    if(n == 0) break;

    for(i=0, sum=0.0; i<n; ++i) sum += data[i];

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(0);
    cout << sum << endl;
  }
  return 0;
}

vector<int> MakePrimeNumber(int n){
  int i, j, k;
  vector<int> data;

  data.push_back(2);
  data.push_back(3);
  for(i=5; i<=n; i+=2){
    for(j=1, k=0; data[j]<=sqrt(i); ++j){
      if(i%data[j] == 0){
        k = 1;
        break;
      }
    }
    if(k == 0) data.push_back(i);
  }
  return data;
}