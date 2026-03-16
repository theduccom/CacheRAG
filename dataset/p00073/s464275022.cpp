#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

typedef long long int ll;


using namespace std;

int x,h;
double y;
double ans;

int main(){
	while(1){
		cin>>x>>h;
		if(x==0&&h==0)break;
		y=sqrt(4*h*h+x*x)/2.0;
		ans=x*(2*y+x);
		printf("%.15lf\n",ans);
	}
}