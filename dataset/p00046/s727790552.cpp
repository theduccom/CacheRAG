#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	double n;
	vector<double>a;
	int i=0;	
        while(cin>>n){
		a.push_back(n);	             
	}
	double x=a[0];
        double y=a[0];
        for(int i=1;i<a.size();i++){
		x=max(x,a[i]);
		y=min(y,a[i]);
	}
	printf("%.1f\n",x-y);
	return 0;
}