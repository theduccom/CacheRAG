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

int n,a,b,ab,o;
char t;
string s;

int main(){
	while(cin>>n>>t>>s){
		if(s=="A") a++;
		else if(s=="B") b++;
		else if(s=="AB") ab++;
		else if(s=="O") o++;
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<ab<<endl;
	cout<<o<<endl;
}