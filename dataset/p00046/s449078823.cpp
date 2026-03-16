#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	double minValue= 1000000000;
	double maxValue= -1;
	double tmp;
	while(cin>>tmp){
		maxValue=max(maxValue,tmp);
		minValue=min(minValue,tmp);
	}
	cout<<maxValue-minValue<<endl;

	return 0;
}