#include <iostream>
//#include <algorithm>
//#include "math.h"

#define EPS 1.e-12

using namespace std;

int main(){
	int count;
	double xa,ya,ra,xb,yb,rb;
	cin >> count;
	for(int i=0;i<count;i++){
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		double dist2 = (xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
		//		double dist = (xa-xb)*(xa-xb)+(xa-xb)*(xa-xb);
		//cout << dist2 << " " << (ra+rb)*(ra+rb) << endl;
		//cout << ((dist2 -(ra+rb)*(ra+rb))>0) << endl;
		if(dist2>(ra+rb)*(ra+rb)+EPS){
			cout << 0 << endl;
		}
		else if(dist2 >= (ra - rb)*(ra - rb)){
			cout << 1 << endl;
		}
		else if(ra>rb){
			cout << 2 << endl;
		}
		else{
			cout << -2 << endl;
		}
	}
}		