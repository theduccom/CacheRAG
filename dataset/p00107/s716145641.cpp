#include <iostream>
#include <cmath>

using namespace std;


int main() {

  int h,w,d;
  int n;
  int r;

  double min_r;


  while(cin >> h >> w >> d) {

    if(h==0 && w==0 && d==0) break;

    cin >> n;

    if(sqrt(h*h+w*w)>sqrt(w*w+d*d)) {

      if(sqrt(w*w+d*d)>sqrt(d*d+h*h)) min_r=sqrt(d*d+h*h)/2.0;

      else min_r=sqrt(w*w+d*d)/2.0;

    }

    else {
	
      if(sqrt(h*h+w*w)>sqrt(d*d+h*h)) min_r=sqrt(d*d+h*h)/2.0;

      else min_r=sqrt(h*h+w*w)/2.0;
      
    }

    //cout << min_r << endl;

    for(int i=0;i<n;i++) {

      cin >> r;

      if(min_r<(double)r) cout << "OK" << endl;

      else cout << "NA" << endl;

    }

  }

  return 0;

}

      