#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double v;
	while(cin>>v){
		double t=v/9.8;
		double y=4.9*t*t;
	//	int n=(((y+5)/5)*10+5)/10;
		int c=1;
	for(int i=0;0<y;i++){
			y-=5;
			c++;
		}
		cout<<c<<endl;
	//	cout<<n<<endl;
	}
}