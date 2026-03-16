#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main() {
  int i, n, j, a, b;
  char c;
  while(cin >> n) {
    getchar();
    while(n--) {

      vector<int> v;
      while( scanf("%c", &c) != EOF ) {
	if(c == '\n') break;
	v.push_back(c - '0');
      }
      sort(v.begin(), v.end());
      a = b = 0;
      
      for(j = 0; j < v.size(); j++) {
	a += v[j] * pow(10, j);
      }
     
      reverse(v.begin(), v.end());
      
      for(j = 0; j < v.size(); j++) {
	b += v[j] * pow(10, j);
      }
      
      cout << a - b << endl;
      
    }
  }
  return 0;
}
    
    
    