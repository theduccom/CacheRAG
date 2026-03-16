#include <iostream>
using namespace std;


bool is_prime(int n)
{
	for(int i=2;i*i<n+1;i++){
		if(n%i==0)
			return false;
	}
	return n != 1;
}

int main()
{
	int n;
	while(cin >> n){
		int	tmp = n-1;
		while(1){
			if(is_prime(tmp)){
				cout << tmp << " ";
				break;
			}
			tmp--;
		}
		tmp = n+1;
		while(1){
			if(is_prime(tmp)){
				cout << tmp << endl;
				break;
			}
			tmp++;
		}
	}
	return 0;
}