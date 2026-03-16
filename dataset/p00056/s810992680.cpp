#include <iostream>
#include <vector>
int main(){
	int isprime[50001] = {0};
	isprime[2] = 1;
	std::vector<int> v;
	v.push_back(2);
	for(int i=3;i<=50000;i+=2){
		bool f = true;
		for(int j=0;v[j]*v[j]<=i;j++){
			if(i % v[j] == 0){f=false;break;}
		}
		if(f){v.push_back(i),isprime[i] = 1;}
	}

	int n, res = 0;
	while(std::cin >> n, n){
		res = 0;
		for(int i=2;i<=n/2;i++){
			if(isprime[i] && isprime[n-i])res++;
		}
		std::cout << res << std::endl;
	}
	
	return 0;
}