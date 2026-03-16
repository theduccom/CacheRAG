#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
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

char s,t,tmp,now='A';

int main(){
	while(cin>>s>>tmp>>t){
		if(s==now) now=t;
		else if(t==now) now=s;
	}
	cout<<now<<endl;
}