#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double v,y;
	int ans;
	while(cin >> v){
		y = 4.9*pow(v/9.8,2);
		y-=0.00001;
		ans = (y/5);
		cout << ans +2 << endl;
		
	}
	return 0;
}
