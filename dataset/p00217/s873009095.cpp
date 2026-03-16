#include <iostream>

using namespace std;

int main() {

  while(1) {

    int n;
    cin >> n;
    if(n == 0) break;

    int maxd = -1;
    int maxp;
    int p,d1,d2;

    for(int i=0;i<n;i++) {

      cin >> p >> d1 >> d2;

      if(maxd < d1 + d2) {
	maxd = d1+d2;
	maxp = p;
      }
    }

    cout << maxp <<" "<<maxd<< endl;

  }

  return 0;

}
		    