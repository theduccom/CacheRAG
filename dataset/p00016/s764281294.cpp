#include<iostream>
#include<cstdio>
#include<cmath>
#define PI 3.141592653589793
using namespace std;

int main(){
	//hosuu = üÍ³êéà, kakudo = üÍ³êépx
	//x = »Ýn_ÌxÀW, y = »Ýn_ÌyÀW, rad = ¡ü¢Ä¢épx(WA)
	int hosuu, kakudo;
	double x = 0.0, y = 0.0, rad = 0.0;
	while(scanf("%d,%d", &hosuu, &kakudo)){
		if(hosuu == 0 && kakudo == 0) break;
		
		//x = hosuu * sin(kakudo), y = hosuu * cos(kakudo)
		x += (hosuu * sin(rad));
		y += (hosuu * cos(rad));
		
		//Éü­pxðwè(WAÉ¼·)
		rad += kakudo * PI / 180.0;
		
	}
	cout <<(int)x <<endl <<(int)y <<endl;
	return 0;
}