#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	int x,h;
    while(1){
        cin>>x>>h;
        if(!x&&!h)break;
        double s=(double)x*sqrt((double)x*(double)x+4*(double)h*(double)h)+(double)x*(double)x;
        printf("%f\n",s);
    }
	return 0;
}