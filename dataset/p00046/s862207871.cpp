#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	float n,max=0.0,min=0.0;
	
	while(cin>>n){
		if(max<n){
			max=n;
		}
		if(min==0){
			min=n;
		}else if(min>n){
			min=n;
		}
	}
	
	cout << max - min;
	
	return 0;
}