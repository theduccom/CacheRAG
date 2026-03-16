#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	double a, tmp, sum;

	while(cin >> a){
		sum = a;
		tmp = a;

		for(int i=2;i<=10;++i){
			if(i%2 == 0)
				a=tmp*2.0;
			else
				a=tmp/3.0;

			tmp = a;

			sum+=a;
		}

		cout << fixed << setprecision(8) << sum << endl;
	}
	return 0;
}