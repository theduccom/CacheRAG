#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int x, h;
	while(cin >> x){
		cin >> h;
		if(x == 0 && h == 0) break;
		double s = x * x + 4 * (x * sqrt((x*0.5)*(x*0.5) + h*h) * 0.5);
		cout << fixed << setprecision(6) << s << endl;
	}
}