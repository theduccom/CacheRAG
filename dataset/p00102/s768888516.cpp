#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n,sum,i,sumsum=0;
	int array[11]={0};
	while(1){
		for(i=0;i<11;i++) array[i]=0;
		cin >> n;
		int loop = n;
		if(!n)break;
		while(loop--){
			sum = 0;
			for(i=0;i<n;i++){
				int x;
				cin >> x;
				cout << setw(5) << x;
				sum += x;
				array[i] += x;
			}
			cout << setw(5) << sum << "\n";
		}
		for(i=0;i<n;i++){
			cout << setw(5) << array[i];
			sumsum += array[i];
		}
	cout << setw(5) << sumsum << "\n";
	sumsum=0;
	}
	return 0;
}