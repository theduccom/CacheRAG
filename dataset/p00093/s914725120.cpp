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
	
	long long a,b;
	int k=0;
	while(cin>>a>>b,a!=0||b!=0){
		if(k!=0)
			cout<<endl;
		int f=0;
		for(int i=a;i<=b;i++){
			if(i%400==0||(i%4==0&&i%100!=0)){
				cout<<i<<endl;
				f=1;
			}
		}
		if(f==0)
			cout<<"NA"<<endl;
		k=1;
	}
}