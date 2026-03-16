#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int i,j,n;
	double d,c[2][3];

	cin>>n;
	while(n--){
		for(i=0;i<2;i++) for(j=0;j<3;j++) cin>>c[i][j];

		d = sqrt( pow( c[1][0] - c[0][0], 2 ) + pow( c[1][1] - c[0][1], 2 ) );

		if(c[0][2] <= c[1][2] && d + c[0][2] < c[1][2]){
			cout<<"-2\n";
		}
		else if(c[0][2] >= c[1][2] && d + c[1][2] < c[0][2]){
			cout<<"2\n";
		}
		else if(d > c[0][2] + c[1][2]){
			cout<<"0\n";
		}
		else{
			cout<<"1\n";
		}
	}

	return 0;
}