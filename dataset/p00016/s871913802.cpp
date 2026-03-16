#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x=0, y=0, rad=M_PI/2;
	
	while(1){
		int a,b;
		cin>>a;
		cin.ignore();  // 1文字読み捨てる
		cin>>b;
		if(a==0&&b==0){
			break;
		}
		x += a*cos(rad);
		y += a*sin(rad);
		rad -= b*(M_PI/180);
	}
	cout<<(int)x <<endl;
	cout<<(int)y <<endl;
	
	return 0;
}