#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long double a, sum=0.0;
	
	while(1){
		cin>>a;
		if(cin.eof())break;
		sum=a;

		for(int i=2; i<=10; i++){
			if(i%2==0){
				a*=2;
				sum+=a;
			}else{
				a/=3;
				sum+=a;
			}
		}
		cout<<setprecision(10);
		cout<<sum<<"\n";
	}

	return 0;
}