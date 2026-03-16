#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int CarryCheese(double, double, double);

int main(){
  int i, n, hole, result, data[3];

  while(1){
    for(i=0; i<3; ++i)
      cin >> data[i];
    if(data[0] == 0 && data[1] == 0 && data[2] == 0) break;

    sort(data, data+3);

    cin >> n;
    for(i=0; i<n; ++i){
      cin >> hole;
      result = CarryCheese(((double)data[0])/2, ((double)data[1])/2, (double)hole);
      if(result == 1)
	cout << "OK" << endl;
      else
	cout << "NA" << endl;
    }
  }

  return 0;
}


int CarryCheese(double x, double y, double h){
  if(x >= h)
    return 0;
  else if(y < sqrt(h*h - x*x))
    return 1;
  else
    return 0;
}