#include <iostream>

using namespace std;

int prime(int n)
{
	if(n < 2){
		return 0;
	} else if(n == 2){
		return 1;
	}
	
	if(n % 2 == 0){
		return 0;
	}
	
	for(int i = 3; i*i <= n; i+= 2){
		if(n % i == 0){
			return 0;
		}
	}
	
	return 1;
}

int main(int argc, char **argv)
{
	int n, s, t;
	
	while(cin >> n){
		for(int i = n-1; i >= 2; i--){
			if(prime(i) == 1){
				s = i;
				break;
			}
		}
		for(int i = n+1; i <= 60000; i++){
			if(prime(i) == 1){
				t = i;
				break;
			}
		}
		
		cout << s << " " << t << endl;
	}
	
	return 0;
}