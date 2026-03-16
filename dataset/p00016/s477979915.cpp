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
typedef long long ll;
const int inf=(1<<31)-1;
const double pi=acos(-1);

double a,b,x=0,y=0,sit=0;
char t;

int main(){
	while(cin>>a>>t>>b){
		if(!a&&!b) break;
		x+=a*sin(sit/180*pi);
		y+=a*cos(sit/180*pi);
		sit+=b;
	}
	cout<<(int)x<<endl;
	cout<<(int)y<<endl;
}