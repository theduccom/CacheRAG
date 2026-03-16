#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
  int rectangle=0;
  int lozenge=0;
  int x,y,z;
  vector<int> edge;

  while(cin >> x){
	cin.ignore();
	cin >> y;
	cin.ignore();
	cin >> z;
	if(x == y) lozenge++;
	if(x * x + y * y == z * z) rectangle++;
	
  }
  cout << rectangle << endl;
  cout << lozenge << endl;

  return 0;
}