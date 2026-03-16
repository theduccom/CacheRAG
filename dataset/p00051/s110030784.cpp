#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int n,max,min;
  char in[8];
  cin >> n;
  for(int r=0;r<n;r++){
	for(int i=0;i<8;i++) cin >> in[i];
	sort(in,in+8);
	min = stoi(string(in));
	reverse(in,in+8);
	max = stoi(string(in));
	cout << max - min << endl;
  }
  return 0;
}