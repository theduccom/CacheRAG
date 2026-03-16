#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	double d, w, h;
	while(cin >> d >> w >> h, d || w || h){
		d = (d/2)*(d/2);
		w = (w/2)*(w/2);
		h = (h/2)*(h/2);
		
		int n;
		cin >> n;
		
		int r;
		for(int i = 0; i < n; i++){//input
			cin >> r;
			if(d+w < r*r || d+h < r*r || w+h < r*r ){
				cout << "OK" << endl;
			}else{
				cout << "NA" << endl;
			}
		}
	}
	return 0;
}
