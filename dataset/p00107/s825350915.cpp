#include <iostream>
#include <algorithm>
#include <math.h>
#define D(x) (x*x)
using namespace std;
int main(){
	while(1){
		int l[4],r,n;
		double m;
		for(int i=0; i<3; i++) cin >> l[i];
		if(l[0]+l[1]+l[2]==0) break;
		sort(l, l+3);
		m = sqrt(D(l[0])+D(l[1]))/2;
		cin >> n;
		while(n--){
			cin >> r;
			if(r>m) cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
	return(0);
}