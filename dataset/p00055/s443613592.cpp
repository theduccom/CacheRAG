#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;


int main(){
	double a[10];
	double now,sum;
	while(cin>>now){
	for(int i=0;i<10;i++)a[i]=0.0;
	a[0]=now;
	sum=a[0];
		for(int i=1;i<10;i++){
			if(i%2==1)a[i]=a[i-1]*2;//??¶??°
			else a[i]=a[i-1]/3;
			sum+=a[i];
		}
		printf("%.15lf\n",sum);
	}
}