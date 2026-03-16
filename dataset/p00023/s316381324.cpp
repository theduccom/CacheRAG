#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void){
	double ax, ay, ar, bx, by ,br;
	double dist;
	double large, small;
	int n;
	int i;

	cin >> n;
	for(i=0;i<n;i++){
		cin >> ax >> ay >> ar >> bx >> by >> br;

		//calc distance between points
		dist = sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
		if(dist > ar + br){
			cout << 0 << endl;
		}else if(dist <= ar + br && dist >= fabs(ar - br) ){ //ツ静堋点ツづーツ篠敖づづつ「ツづゥ
			cout << 1 << endl;
		}else{
			if(max(ar, br) == ar){
				cout << 2 << endl;
			}else{
				cout << -2 << endl;
			}
		}
	}

	return 0;
}