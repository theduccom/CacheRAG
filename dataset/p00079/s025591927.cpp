#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main(){
	int c=0;
	double  a,b,sum=0.0;
	double x[21]={},y[21]={};
	while(scanf("%lf,%lf",&a,&b)!=EOF){
		//if(a==-1) break;
		if(c==0){
			x[c]=a; y[c]=b;
		}else{
			x[c]=a-x[0]; y[c]=b-y[0];
		}
		c++;
	}
	rep(i,1,c-1){
		sum+=0.5*abs(x[i]*y[i+1]-x[i+1]*y[i]);
	}
	printf("%.10lf\n",sum);
}
/*
double dist(double x1,double y1,double x2,double y2){
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

double solve(double x1,double y1,double x2,double y2,double x3,double y3){
	double a,b,c,z,s;
	a=dist(x1,y1,x2,y2);
	b=dist(x2,y2,x3,y3);
	c=dist(x3,y3,x1,y3);
	z=(a+b+c)*0.5;
	s=sqrt(z*(z-a)*(z-b)*(z-c));
	return s;
}

int main(){
	char c;
	double x1,y1,x2,y2,x3,y3,sum=0;
	cin>>x1>>c>>y1>>x2>>c>>y2;
	//scanf("%lf,%lf%c%lf,%lf",&x1,&y1,&c,&x2,&y2);
	while(scanf("%lf,%lf",&x3,&y3)!=EOF){
		sum+=solve(x1,y1,x2,y2,x3,y3);
		x2=x3; y2=y3;
		o(" "<<sum);
	}
	printf("%.10lf",sum);
}*/
/*
typedef complex<double> xy_t;

//??????????¬?????????¢????????????
double cross_product(xy_t a,xy_t b){
	return (conj(a)*b).imag();
}

xy_t P[110];

int main(){
	int n=0;
	double x,y;
	while(~scanf("%lf,%lf",&x,&y)){
		P[n++]=xy_t(x,y);
	}
	double sum=0.0;
	rep(i,0,n-2){
		xy_t a=P[0],b=P[i+1],c=P[i+2];
		sum+=0.5*cross_product(b-a,c-a);
	}
	printf("%.6lf\n",abs(sum));
}*/