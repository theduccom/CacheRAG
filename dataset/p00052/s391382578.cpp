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
	
	while(cin>>n,n!=0){
		int count=0;
		
		for(int i=5;i<=n;i=i*5){
		for(int j=1;j<=n;j++){
		if(j%i==0)
			count++;
		}
		}
		cout<<count<<endl;
	}
}