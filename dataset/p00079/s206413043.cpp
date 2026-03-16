#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define PI 3.14159265
#define rep(i,n) for(int i=0;i<n;i++)
struct P{double x,y;};

double dist(P a , P b){
	a.x-=b.x , a.y-=b.y;
	return sqrt(a.x * a.x + a.y * a.y);
}

double heron(P a , P b , P c){
	double l[3] = {dist(a,b),dist(b,c),dist(a,c)};
	double z = (l[0]+l[1]+l[2]) / 2.0;
	return sqrt( z*(z-l[0])*(z-l[1])*(z-l[2]) );
}
int main(){
	P t;
	vector<P> d;
	while(~scanf("%lf,%lf",&t.x,&t.y))d.push_back(t);
	double sum = 0;
	int n = d.size();
	for(int i=1;i+1<n;i++)sum += heron(d[0],d[i],d[i+1]);
	cout << sum << endl;
}