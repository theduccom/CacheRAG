#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

int keta(int x){
	int i=0;
	while (x/pow(10,i)>=1){
		i++;
	}
	if (x==0){
		return 1;
	}
	else
	return i;
	}


int main(){
double min;
while (cin>>min){
	double y;
	int N;
	y=4.9*(min/9.8)*(min/9.8);
	N=ceil((y+5)/5);
	cout<<N<<endl;

}

}