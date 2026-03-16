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
#include <sstream>
#include <map>
 
using namespace std;
 
const double eps=1e-10;

int main()
{
	long long l[10];
	while(cin>>l[0]){
		l[0]*=1000;
		long long sum=l[0];

		char dummy;
		for(int i=1;i<10;i++){
			cin>>dummy>>l[i];
			l[i]*=1000;
			sum+=l[i];
		}
		double v1,v2;
		cin>>dummy>>v1>>dummy>>v2;

		v1/=3.6; v2/=3.6;

		//x1=v1*t x2=-v2*t+sum
		double x=v1*sum/(v1+v2);

		int L=0;
		for(int i=0;i<10;i++){
			L+=l[i];
//			cout<<"x="<<x<<endl<<"l="<<L<<endl;
			if(x<=L){
				cout<<i+1<<endl;
				break;
			}
		}


	}

	return 0;
}