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
#include <string>
#include <set>
using namespace std;
int main(){
	
	bool p[50001]={false};
	
	p[2]=true;
	for(int i=3;i<50001;i+=2){
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
	
	int n;
	while(cin>>n,n!=0){
		int count=0;
		for(int i=0;i<=n/2;i++){
			if(p[n-i]&&p[i]){
			count++;
			}
			
		}
		
					
				
		cout<<count<<endl;
	}
	
	
	
}