#include<iostream>

using namespace std;

int main(void){
	double high=0,low=0,data;
	
	cin>>data;
	high=low=data;
	while(cin>>data){
		if(high<data)	high=data;
		if(low>data)	low=data;
	}
	cout<<high-low<<endl;

	return 0;
}