#include<iostream>
using namespace std;
int main(){
	double max=0,min=100000,n;
	while(cin>>n){
		if(n>max)max=n;
		if(n<min)min=n;
	}
	cout<<max-min<<endl;
}