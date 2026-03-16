#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <queue>
#include <algorithm>
#include <cctype>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const double pi=acos(-1);

int a,b,c,tyo=0,hi=0;
char t;

int main(){
	while(cin>>a>>t>>b>>t>>c){
		if(c*c==a*a+b*b) tyo++;
		if(a==b) hi++;
	}
	cout<<tyo<<endl;
	cout<<hi<<endl;
}