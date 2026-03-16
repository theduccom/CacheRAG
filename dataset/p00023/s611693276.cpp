#include<iostream>
#include<complex>
using namespace std;
typedef complex<double> P;

#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )

int main(){
	P x,y;
	double r1,r2,dis;
	int n;
	cin>>n;
	while(n--){
		cin>>x.real()>>x.imag()>>r1>>y.real()>>y.imag()>>r2;
		dis=abs(x-y);
		if(dis>r1+r2+EPS){
			cout<<"0"<<endl;
		}else if(dis>abs(r1-r2)-EPS){
			cout<<"1"<<endl;
		}else{
			if(r1>r2)
				cout<<"2"<<endl;
			else
				cout<<"-2"<<endl;
		}
	}
	return 0;
}