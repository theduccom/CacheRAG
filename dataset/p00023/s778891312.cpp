#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n-- > 0){
		double xa, ya, ra, xb, yb, rb;
		cin>>xa >>ya >>ra >>xb >>yb >>rb;
		double ab = sqrt( pow( (xb-xa),2) + pow( (yb-ya),2));
		
		if(ab > ra + rb){
			cout<< 0 <<endl;
		}else if(ab < fabs(ra-rb) && ra>rb){
			cout<< 2 <<endl;
		}else if(ab < fabs(ra-rb) && ra<rb){
			cout<<-2<<endl;
		}else{
			cout<< 1<<endl;
		}
	}
	return 0;
}