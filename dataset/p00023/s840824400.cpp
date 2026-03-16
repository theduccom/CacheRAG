#include<iostream>
#include<cmath>
#include<cstdio>

struct P{
	double x, y;
};

struct Circle{
	P cp;
	double r;
};

double dist(Circle a, Circle b){
	double dx = a.cp.x - b.cp.x,
		dy = a.cp.y - b.cp.y;
	return sqrt(dx*dx+dy*dy);
}

double abs(double a){
	return (a>0)?(a):(-a);
}

int main(){
	int n;
	std::cin >> n;
	for(int i=0;i<n;i++){
		Circle a, b;
		std::cin >> a.cp.x >> a.cp.y >> a.r >> b.cp.x >> b.cp.y >> b.r;
		double d = dist(a, b),
			sum = a.r+b.r,
			diff = abs(a.r-b.r);
		if(d > a.r+b.r){//重ならない
			puts("0");
		}else if(diff <= d && d <= sum){//交わる
			puts("1");
		}else if(d < diff){//内包
			if(a.r > b.r){
				puts("2");
			}else{
				puts("-2");
			}
		}
	}
}