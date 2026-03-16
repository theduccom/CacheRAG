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

	long long sum=0;
	double num=0.0;
	int a,b,n=0;
	char c;

	while(cin>>a>>c>>b){
		sum+=a*b;
		num+=b;
		n++;
	}

	cout<<sum<<endl<<(long long)(num/n+0.5)<<endl;

	return 0;
}