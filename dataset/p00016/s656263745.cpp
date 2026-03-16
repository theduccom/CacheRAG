#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#define MY_PI 3.1415926535897932384626433832795028841971693993751058209749445923
using namespace std;

int main() {
	double sumx=0, sumy=0;
	int ideg = 0;
	while(true) {
		int a,b; scanf("%d,%d",&a,&b);
		if(a==0 && b==0)break;
		sumx += a*sin(ideg*MY_PI/180);
		sumy += a*cos(ideg*MY_PI/180);
		ideg = (ideg+b)%360;
		if(ideg<0)ideg+=360;
	}
	printf("%d\n%d\n",(int)sumx,(int)sumy);
	return 0;
}