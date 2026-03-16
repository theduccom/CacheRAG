#include <iostream>
#include <vector>
#include <cmath>

auto main()
 -> int{

	std::cin.tie(0);
	std::ios_base::sync_with_stdio(false);

	int n, out = 0, base = 0, point = 0;
	std::string cmd;

	std::cin>> n;
	for(int i=0;i < n;i++ ){
		out = 0;
		base = 0;
		point = 0;
		while(out < 3){
			std::cin>> cmd;
			if(cmd == "HIT"){
				base <<= 1;
				base += 1;
				if(base > 8){
					base -= 8;
					point++;
				}
			}else if(cmd == "OUT"){
				out++;
			}else{
				for(int i = 2;i >= 0 ;i--){
					if(base - pow(2,i) >= 0){
						base -= pow(2,i);
						point++;
					}
				}
				point++;
			}
		}
		std::cout<< point <<"\n";
	}

	return 0;
}