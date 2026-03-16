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

	int n;
	bool p[300002]={false};
	
	p[2]=true;
	p[3]=true;
	
	for(int i=3;i<=300000;i+=2){
		bool f=false;
		for(int j=3;j<=sqrt(i);j+=2){
			if(i%j==0){
				f=true;
				break;
			}
			
		}
		if(!f)
			p[i]=true;
	}
	
	long long s=0;

	
	while(cin>>n,n!=0){
		long long s=0;
		if(n>=1){
			s+=2;
			n--;
		}
		for(int j=3;j<=300000;j+=2){
			if(n<=0)
				break;
			else if(p[j]){
				s+=j;
				n--;
			}
		}
		cout<<s<<endl;
	}


}