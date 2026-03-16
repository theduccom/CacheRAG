#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sequence[11];
	while(cin >> sequence[1]){
		double sum=sequence[1];
		for(int i=2;i<=10;i++){
			if(i%2==1){
				sequence[i] = sequence[i-1]/3.0;
				sum += sequence[i];
			}
			else{
				sequence[i] = sequence[i-1]*2.0;
				sum += sequence[i];
			}
		}
		cout << setprecision(8) << fixed << sum << endl;
	}
	return 0;
}