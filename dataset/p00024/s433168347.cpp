#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double v,y;
	while(cin>>v){
	y=4.9*v/9.8*v/9.8;
	for(int i=1;i!=1000000;i++){
		if((i*5-5)>y){
			cout<<i<<endl;
		break;
		}
	}	
	}
}