#include <iostream>
#include <math.h>
#define MAX_N 100000
using namespace std;
int n,m=0,r;
double d,w,h,minl; 
int main(){
	while(1){
		cin >> d>> w>> h;
		if(d==0 && w==0 && h==0)break;

		minl=MAX_N;
		if(sqrt(d*d+w*w)<minl)minl=sqrt(d*d+w*w);
		if(sqrt(h*h+w*w)<minl)minl=sqrt(h*h+w*w);
		if(sqrt(d*d+h*h)<minl)minl=sqrt(d*d+h*h);
		cin >> n;
		m=n;
		while(n--){
			cin >> r;
			if(2*r>minl){
				cout << "OK"<<endl;
			}else{
				cout << "NA"<<endl;
			}
		}
	}
	return 0;
}