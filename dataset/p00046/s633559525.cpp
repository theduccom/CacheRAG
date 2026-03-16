#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	double height;
	double Min=100000000, Max=0;
	while(cin>>height){
		Min = min( Min, height );
		Max = max( Max, height);
	}
	
	double difference = Max - Min;
	cout<<difference<<endl;
	return 0;
}
	