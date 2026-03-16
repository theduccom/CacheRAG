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
	
	string x;
	
	getline(cin,x);
	transform(x.begin(),x.end(),x.begin(),::toupper);
	cout<<x<<endl;
	

}