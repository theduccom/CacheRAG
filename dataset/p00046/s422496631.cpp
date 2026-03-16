#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	double mt,max, min;
	cin>>mt;
	max=min=mt;
	while(cin>>mt){
		if(max<mt){
			max=mt;
		}else if(min>mt){
			min=mt;
		}
	}
	printf("%.1f\n", max-min);
	return 0;
}