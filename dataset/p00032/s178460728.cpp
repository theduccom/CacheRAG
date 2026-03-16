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
	int a,b,c;
	char d;
	int rec=0,rho=0;
	while(cin>>a>>d>>b>>d>>c){
		if(a*a+b*b==c*c) rec++;
		else if(a==b) rho++;
	}

	cout<<rec<<endl<<rho<<endl;


	return 0;
}