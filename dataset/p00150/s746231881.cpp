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
	int n, p, q;
	
	while(1){
		cin >> n;
		if(n == 0){
			break;
		}
		
		for(int i = n; i > 2; i--){
			if(prime(i) == 1){
				p = i;
				break;
			}
		}
		
		for(int i = p-1; i > 2; i--){
			if(prime(i) == 1){
				if((p-i) == 2){
					q = i;
					break;
				}
				p = i;
			}
		}
		
		cout << q << " " << p << endl;
	}
	
	return 0;
}