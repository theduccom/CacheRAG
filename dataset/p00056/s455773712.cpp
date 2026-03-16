#include <iostream>
using namespace std;
int p[50000];

void era() {
  for(int i = 2; i < 50000; i++) {
    p[i] = 1;
  }

  for(int i = 2; (i*i) < 50000; i++) {
    if(p[i] == 1) {
      for(int j = (i*2); j < 50000; j+=i)
        p[j] = 0;
    }
  }
}

int main() {
  int n, cnt;
  era();

  while(cin>>n) {
    if(n == 0) break;
    cnt = 0;
    for(int i = 1; (int)i <= (n/2); i++) {
      if(p[i] == 1 && p[n-i] == 1)
	cnt++;
    }
    cout << cnt << endl;;
  }

  return 0;
}

