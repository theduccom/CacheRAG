#include<cstdio>
#include<vector>
#include<utility>
#include<cmath>
using namespace std;

double area(pair<double,double> a, pair<double,double> b, pair<double,double> c){
	double d1 = sqrt( pow(a.first-b.first,2) + pow(a.second-b.second,2) );
	double d2 = sqrt( pow(c.first-b.first,2) + pow(c.second-b.second,2) );
	double d3 = sqrt( pow(a.first-c.first,2) + pow(a.second-c.second,2) );
	double s = (d1+d2+d3)/2.0;
	return sqrt( s*(s-d1)*(s-d2)*(s-d3) );
}

int main(){
	double x,y;
	vector<pair<double,double> > vec;
	while(scanf("%lf,%lf",&x,&y) != EOF){
		vec.push_back(make_pair(x,y));
	}
	double rta = 0;
	for(int x=1;x<vec.size()-1;++x){
		rta += area(vec[0],vec[x],vec[x+1]);
	}
	
	printf("%.8lf\n",rta);
}