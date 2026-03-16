#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
int main(){

	int n;
	int b,d1,d2;
	
	while(cin>>n,n!=0){
		int max,g=0;
		for(int i=0;i<n;i++){
			cin>>b>>d1>>d2;
			if(g<d1+d2){
				g=d1+d2;
				max=b;
			}
		}
		cout<<max<<" "<<g<<endl;
	}
}