#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
using namespace std;
int main(){
	
	int x=0,y=0;
	int a,b,c;
	char comma;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(pow(a,2)+pow(b,2)==pow(c,2))
			x++;
		if(pow(a,2)-pow(double(c)/2,2)==pow(b,2)-pow(double(c)/2,2))
			y++;
	}
	
	cout<<x<<endl;
	cout<<y<<endl;
	
}