#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
using namespace std;
int main(){
	
	int a,b,c;
	bool f=false;
	cin>>a>>b>>c;
	
	if(a==1){
		if(b==1)
			f=true;
	}
	else{
		if(c==1)
			f=true;
	}

	if(f)
		cout<<"Open"<<endl;
	else
		cout<<"Close"<<endl;


}