#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (l);i < (r);i++)
#define ALL(x) (x).begin(),(x).end()
template<typename T> bool chmax(T& a,const T& b){return a < b ? (a = b,true) : false;}
template<typename T> bool chmin(T& a,const T& b){return b < a ? (a = b,true) : false;}
typedef long long ll;

const double PI = acos(-1.0);

int main()
{
	double X = 0.0,Y = 0.0;
	int A,B,R = 90;
	while(scanf("%d,%d",&A,&B),(A || B)){
		X += A * cos(R * PI / 180.0);
		Y += A * sin(R * PI / 180.0);
		R -= B;
		if(R > 180) R -= 360;
		if(R < -180) R += 360;
	}

	printf("%d\n%d\n",(int) X,(int) Y);

	return 0;
}