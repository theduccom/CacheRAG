#include<iostream>
#include<cmath>
#include<iomanip>
#include<array>

//#define P(p) pow 

using namespace std;

int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		array<pair<double,double>,3>p;
		cin>>p[0].first>>p[0].second>>p[1].first>>p[1].second>>p[2].first>>p[2].second;

		pair<long double, long double >o(
			 ((p[2].second - p[1].second) * (pow(p[1].first, 2.0) - pow(p[0].first, 2.0) + pow(p[1].second, 2.0) - pow(p[0].second, 2.0)) - (p[1].second - p[0].second) * (pow(p[2].first, 2.0) - pow(p[1].first, 2.0) + pow(p[2].second, 2.0) - pow(p[1].second, 2.0))) / (2.0 * ((p[1].first - p[0].first) * (p[2].second - p[1].second) - (p[1].second - p[0].second) * (p[2].first - p[1].first))),
                (- (p[2].first - p[1].first) * (pow(p[1].first, 2.0) - pow(p[0].first, 2.0) + pow(p[1].second, 2.0) - pow(p[0].second, 2.0)) + (p[1].first - p[0].first) * (pow(p[2].first, 2.0) - pow(p[1].first, 2.0) + pow(p[2].second, 2.0) - pow(p[1].second, 2.0))) / (2.0 * ((p[1].first - p[0].first) * (p[2].second - p[1].second) - (p[1].second - p[0].second) * (p[2].first - p[1].first)))
				);

		long double r=sqrt(pow(p[0].first - o.first, 2) + pow(p[0].second - o.second, 2));

		cout<<fixed<<setprecision(3)<<o.first<<" "<<o.second<<" "<<r<<endl;
	}
	return 0;
	
}
