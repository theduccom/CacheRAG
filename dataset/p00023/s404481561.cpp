#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
  // (x, y) r
  double a[3],b[3];
  int n;

  cin >> n;
  while(n > 0){
    // input
    for(int i = 0; i < 3; i++){
      cin >> a[i];
    }
    for(int i = 0; i < 3; i++){
      cin >> b[i];
    }

    // distance
    double distance;
    distance = sqrt(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2));

    // judgment
    if(distance > a[2] + b[2]){
      cout << "0" << endl;
    }
    else if(distance < a[2] - b[2]){
      cout << "2" << endl;
    }
    else if(distance < b[2] - a[2]){
      cout << "-2" << endl;
    }
    else{
      cout << "1" << endl;
    }
    
    n--;
  }

  return 0;
}