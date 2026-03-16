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

int ans=0;
string str,tmp;

int main(){
	while(cin>>str){
		tmp=str;
		reverse(tmp.begin(),tmp.end());
		if(str==tmp) ans++;
	}
	cout<<ans<<endl;
}