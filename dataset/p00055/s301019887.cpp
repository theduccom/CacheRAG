#include <iostream>
#include <iomanip>
#include <cstdio>
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
const int inf=1<<30;
const double pi=acos(-1);

double n;

int main(){
	cout<<shosu(9);
	while(cin>>n){
		vector<double> num(10);
		double ans=0;
		num[0]=n;
		for(int i=1;i<10;i++){
			if(i%2) num[i]=num[i-1]*2;
			else num[i]=num[i-1]/3;
		}
		for(int i=0;i<10;i++){
			ans+=num[i];
		}
		cout<<ans<<endl;
	}
}