#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int l[10];
  int v[2];
  int i, j;
  int sum;
  double p;

  while(cin >> l[0]){
	cin.ignore();
	cin >> l[1];
	cin.ignore();
	cin >> l[2];
	cin.ignore();
	cin >> l[3];
	cin.ignore();
	cin >> l[4];
	cin.ignore();
	cin >> l[5];
	cin.ignore();
	cin >> l[6];
	cin.ignore();
	cin >> l[7];
	cin.ignore();
	cin >> l[8];
	cin.ignore();
	cin >> l[9];
	cin.ignore();
	cin >> v[0];
	cin.ignore();
	cin >> v[1];
	sum = 0;
	for(i=0;i<10;i++){
	  sum += l[i];
	}

	p = sum * ((double)v[0] / (v[0] + v[1]));

	i=0;
	while(p > 0){
	  p -= l[i++];
	}
	cout << i << endl;

  }
  return 0;
}