#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	int x,h;
	while(true){
		cin>>x>>h;
		if(x==0&&h==0)
			break;
		double s=x*x;
		s+=x*2*(double)sqrt((double)x*x/4+h*h);
		cout<<fixed<<setprecision(10)<<s<<endl;
	}
    return 0;
}
 