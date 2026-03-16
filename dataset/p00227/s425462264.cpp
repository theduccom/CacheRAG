#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, m, p[1001];

  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0){
      break;
    }
    for(int i = 0; i < n; i++){
      cin >> p[i];
    }
    sort(p, p+n);

    int s=0;
    for(int i = n-1, j=1; i >= 0; i--, j++){
      if(j == m){
	j = 0;
      } else {
	s += p[i];
      }
    }
    cout << s << endl;
  }

  return 0;
}