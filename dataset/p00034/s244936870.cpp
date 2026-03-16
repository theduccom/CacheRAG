#define	_USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
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
	
	int l[10];
	int v1,v2;
	int sum;
	char comma;
	double h,d;
	int ans;
	
	while(cin>>l[0]){
		
		sum=l[0];
		
		for(int i=1;i<10;i++){
			cin>>comma>>l[i];
			sum+=l[i];
		}
		cin>>comma>>v1>>comma>>v2;
		
		h=double(sum)/(v1+v2);
		d=double(v1)*h;
		
		for(int i=0;i<10;i++){
			d-=l[i];
			if(d<=0){
				ans=i+1;
				break;
			}
		}
		cout<<ans<<endl;
		
	}
	
}