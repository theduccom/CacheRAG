#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a;
	while(cin>>a){
		double ans=8*a-5*a/27;
		cout << fixed << setprecision(8);
		cout << ans << '\n' ;
	};
}