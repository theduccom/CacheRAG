#include <iostream>
using namespace std;


//0045
int main(){
	int p,n, p_sum=0, n_sum=0, cnt=0;
	char ch;
	while(cin >> p >> ch >> n){
		p_sum += p*n;
		n_sum += n;
		++cnt;
	}

	int avg = ((n_sum * 10 / cnt) + 5)/10;
	cout << p_sum << endl;
	cout << avg << endl;

	
}