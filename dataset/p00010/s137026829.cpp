#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<queue>
#include<map>
#include<set>
#include<vector>
#include<list>
#include<stack>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

struct Coor{
	double x,y;
};

struct Ans2{
	double l,m;
};

struct Ans3{
	double l,m,n;
	Ans3(Ans2 a){
		l=a.l; m=a.m;
	}
};

Ans2 solve2(double l[2],double m[2],double n[2]){
	/*for(int i=0;i<2;i++){
		printf("(%lfl)+(%lfm)+n = (%lf)\n",l[i],m[i],n[i]);
	}*/
	Ans2 ans;
	double a,b;
	a = l[0]*m[1]-l[1]*m[0]; b = n[0]*m[1]-n[1]*m[0];
	ans.l = b/a;
	//printf("%lfx = %lf\n",a,b);
	a = m[0]*l[1]-m[1]*l[0]; b = n[0]*l[1]-n[1]*l[0];
	ans.m = b/a;
	//printf("%lfy = %lf\n",a,b);
	return ans;
}

Ans3 solve3(double l[3],double m[3],double n[3]){
	double _l[2],_m[2],_n[2];
	_l[0] = l[0]-l[1]; _l[1] = l[0]-l[2];
	_m[0] = m[0]-m[1]; _m[1] = m[0]-m[2];
	_n[0] = n[0]-n[1]; _n[1] = n[0]-n[2];
	Ans3 ans = Ans3(solve2(_l,_m,_n));
	ans.n = n[0]-(l[0]*ans.l+m[0]*ans.m);
	return ans;
}

int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		Coor in[3];
		double l[3],m[3],n[3];
		for(int i=0;i<3;i++){
			cin>>in[i].x>>in[i].y;
			l[i] = in[i].x;
			m[i] = in[i].y;
			n[i] = -(in[i].x*in[i].x+in[i].y*in[i].y);
			//printf("(%lfl)+(%lfm)+n = (%lf)\n",l[i],m[i],n[i]);
		}
		Ans3 ans3 = solve3(l,m,n);
		//printf("l = %lf, m = %lf, n = %lf\n",ans3.l,ans3.m,ans3.n);
		double r = sqrt(-(ans3.n-ans3.l/2*ans3.l/2-ans3.m/2*ans3.m/2));
		printf("%.3lf %.3lf %.3lf\n",-ans3.l/2,-ans3.m/2,r);
	}
}