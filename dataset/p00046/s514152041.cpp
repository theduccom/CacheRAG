#include<iostream>
#include<climits>
#include<cmath>
#include<cfloat>
using namespace std;

int main(){
	double num,maximum=0,minimum=DBL_MIN,cnt=0;
	while(cin>>num){
		maximum=max(maximum,num);
		if(cnt==0){
			minimum=num;
		}else{
			minimum=min(minimum,num);
		}
		cnt++;
	}
	cout<<maximum-minimum<<endl;
	return 0;
}