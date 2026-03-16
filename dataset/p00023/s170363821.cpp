#include <iostream>
#include <cmath>
#include <array>

int main(){
	int N;
	std::cin >> N;
	
	std::array<int, 20> ans;
	
	for(int i=0; i<N; ++i){
		double xa, ya, ra, xb, yb, rb;
		std::cin >> xa >> ya >> ra >> xb >> yb >> rb;
		
		double d = pow((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb), 0.5);
		
		if(ra > rb && d < ra-rb) ans[i] = 2;
		else if(rb > ra && d < rb-ra) ans[i] = -2;
		else if(d <= ra+rb) ans[i] = 1;
		else if(d > ra+rb) ans[i] = 0;
	}
	
	for(int i=0; i<N; ++i)
		std::cout << ans[i] << std::endl;
	
	return 0;
}