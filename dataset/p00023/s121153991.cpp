#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int num ;
	cin >> num;
	for(int j = 1;j<= num; j++){
	double x[2],y[2],r[2],r2[2];
	for(int i =0;i<=1;i++){
		cin >> x[i];
		cin >> y[i];
		cin >> r[i];
	}
	double d;
	d = sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
	if((r[0]+r[1])<d) cout << 0 << endl;
	else if(r[0]+d < r[1]) cout << -2 << endl;
	else if(r[1]+d < r[0]) cout << 2 << endl;
	else cout << 1 << endl;
	}
	return 0;
}