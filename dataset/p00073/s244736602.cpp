#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,P> pip;
const int inf=(1<<31)-1;

double x,y,h,S;

int main(){
	cout<<shosu(7);
	while(1){
		cin>>x>>h;
		if(!x&&!h) break;
		S=x*x;
		x/=2;
		y=sqrt(x*x+h*h);
		cout<<4*(x*x+x*y)<<endl;
	}
}