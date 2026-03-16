#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
	while(1){
	int x,h; double S;
	cin >> x >> h ; if(x==0&&h==0) break;
	S=x*sqrt((double)4*h*h+x*x)+x*x ;
	cout << fixed << setprecision(6) ;
	cout << S << '\n' ;
	};
}