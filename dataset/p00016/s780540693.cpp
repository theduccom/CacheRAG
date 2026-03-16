#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

	double cx,cy;cx=cy=0;
	int ca=90;
	int op[2];
	char tmp;
	while(cin>>op[0]>>tmp>>op[1]&&!(op[0]==0&&op[1]==0)){
		cy += op[0]*sin(((double)ca/180)*3.141592);
		cx += op[0]*cos(((double)ca/180)*3.141592);
		ca -= op[1];
	}
	cout<<(int)cx<<endl;
	cout<<(int)cy<<endl;
	return 0;
}