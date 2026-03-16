#include <iostream>

using namespace std;

int main() {

  int n;
  int p,d1,d2;

  int max_dist;
  int max_p;


  while(cin >> n) {

    if(n==0) break;

    max_dist=0;

    for(int i=0;i<n;i++) {

      cin >> p >> d1 >> d2;

      if(d1+d2>max_dist) {

	max_dist=d1+d2;
	max_p=p;

      }

    }

    cout << max_p << " " << max_dist << endl;

  }

  return 0;

}