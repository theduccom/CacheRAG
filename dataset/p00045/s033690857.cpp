#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int sum=0,t,s,a_sum=0,ave,count=0;
	while(scanf("%d,%d",&t,&s) != EOF){
		sum += t*s;
		a_sum += s;
		count++;
	}
	ave = (int)((double)a_sum/count+0.5);
	cout << sum << endl << ave << endl;
}