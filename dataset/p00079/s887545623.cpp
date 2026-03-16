#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <queue>
#include <cctype>
#include <climits>
#include <stack>
using namespace std;
   
  
   
int main(){
   

	vector<double> xs,ys;
	double x,y;	
	while(scanf("%lf,%lf",&x,&y)!=EOF){
		 xs.push_back(x);
		 ys.push_back(y);
	}

	xs.push_back(xs[0]);
	ys.push_back(ys[0]);

	double res=0;
	for(int i=0;i<xs.size()-1;i++){
		res+=(xs[i]-xs[i+1])*(ys[i]+ys[i+1]);
	} 

	printf("%.10f\n",abs(res/2.0));

}