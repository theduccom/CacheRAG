#include<iostream>

using namespace std;

int main(void){

	double y,v,t;
	int step;
	while(cin>>v){
		t=y=0;
		step=0;
		t=v/(9.8);
		y=4.9*t*t;
		step=(int)((y+5)/5)+1;

		printf("%d\n",step);
	}
}