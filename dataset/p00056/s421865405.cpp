#include <iostream>
#include <vector>
#include <cstring>

//isprimeðìÁÄ­êéÖ
int* prime(int num){
	std::vector<int> v;
	int* res = new int[num+1];
	memset(res, 0, sizeof(res));
	res[2] = 1;
	v.push_back(2);

	bool f;
	for(int i=3;i<=num;i+=2){
		f = true;
		for(int j=0;v[j]*v[j]<=i;j++){
			if(i % v[j] == 0){f=false;break;}
		}
		if(f){v.push_back(i),res[i] = 1;}
	}

	return res;
}

int main(){
	int* isprime = prime(50000);

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