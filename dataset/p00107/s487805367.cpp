#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int tate,yoko,takasa,mn,md;
	int n;
	while(cin>>tate>>yoko>>takasa, tate|| yoko || takasa){
		cin>>n;
		int* r = new int [n];
		mn=min(min(tate , yoko) , takasa);
		if(tate>=yoko){
			if(yoko>=takasa) {
			    md=yoko;
			} else if (yoko<takasa) {
				if(tate>=takasa)  md=takasa;
				else if (tate<takasa)  md=tate;
			}
			
		} else if (tate<yoko){
			if (tate>=takasa){
				md=tate;
			} else if(tate<takasa){
				if(yoko>=takasa) md=takasa;
				else if(yoko<takasa) md=yoko;
			}
		}
		for(int i=0;i<n;++i){
			cin>> r[i];
			cout << ((r[i]*r[i]*4>mn*mn+md*md) ? "OK" : "NA") << endl;
		}
	}
	return 0; 
}