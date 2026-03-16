#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
  int x;
  vector<int> v;

  while (scanf("%d ", &x) == 1) {
    v.clear();
    int omori = 512;
    while (x > 0) {
      if (x >= omori) {
	x -= omori;
	v.push_back(omori);
      }
      omori /= 2;
      //cout << x << endl;
    }
    for (int i = v.size() - 1; i >= 0; i--) {
      cout << v[i];
      if (i == 0) {cout << endl;}
      else {cout << " ";}
    }
  }
  return 0;
}