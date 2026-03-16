#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double nx=0,ny=0,x,y,ro=90;
	while(true){
		cin>>x;cin.ignore();cin>>y;	
		if(x==0&&y==0)break;
		ny+=x*sin(ro/180*M_PI);
		nx+=x*cos(ro/180*M_PI);
		ro-=y;
		//if(ro<0)ro=360-abs(ro);
		//cout<<nx<<" "<<ny<<endl;
	}
	cout<<(int)nx<<endl<<(int)ny<<endl;
	return 0;
}