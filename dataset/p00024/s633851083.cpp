#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double d,y;
	int res;
	while(cin>>d){
		y=d*d/19.6;
		res=ceil(y);
		res=max((res-1)/5+2,1);
		cout<<res<<endl;
	}
	return 0;
}