#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	double data,high=0,low=1000000;
	while(cin>>data){
		if(high<data){
			high=data;
		}
		if(low>data){
			low=data;
		}
	}
	printf("%.1lf\n",high-low);
}