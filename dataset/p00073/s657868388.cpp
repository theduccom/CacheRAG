#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	while(1){
        double x;
        double h;
        double h1;
        cin >> x >> h;
        if(x == 0 && h == 0) break;
        double sum = 0;

        h1 = hypot((x/2),h);
        sum += x * x;
        sum += x * h1 * 2;
        printf("%.6lf\n",sum);
	}
	return 0;
}