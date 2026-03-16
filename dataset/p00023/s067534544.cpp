#include <iostream>
#include <cmath>
using namespace std;

const double EPS = 1.0e-6;
int main(){
	int n;
	cin>>n;
	for(int num=0; num<n; num++){
		double xa, ya, ra, xb, yb, rb;
		cin>>xa>>ya>>ra>>xb>>yb>>rb;
		double dist2 = (xb-xa)*(xb-xa)+(yb-ya)*(yb-ya);
		double dist = sqrt(dist2);
		int ans;
		if(dist+ra < rb){
			ans = -2;
		} else if(dist+rb < ra){
			ans = 2;
		} else if(ra+rb < dist){
			ans = 0;
		} else {
			ans = 1;
		}
		cout<<ans<<endl;
	}
	return 0;
}