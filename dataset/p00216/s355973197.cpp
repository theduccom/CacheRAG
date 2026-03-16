#include<iostream>

int w;

int solve(int w){
	int ans = 1150;
	if(w>10)
		ans += 125*(w-10);
	if(w>20)
		ans += 15*(w-20);
	if(w>30)
		ans += 20*(w-30);
	return ans;
}

int main(){
	while(true){
		std::cin >> w;
		if(w==-1)
			return 0;
		std::cout << 4280-solve(w) << std::endl;
	}
}