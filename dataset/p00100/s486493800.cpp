#include <iostream>
#include <array>

template<typename itr, typename func>
func for_each_withindex(itr fi, itr l, func f){
	unsigned i{};
	for(; fi!=l; ++fi,++i){
		f(*fi,i);
	}
	return f;
}

int main(int argc, char const* argv[])
{
	unsigned n{};
	while (std::cin >> n,n != 0) {
		long long e{}, p{}, q{};
		bool isna{true};
		std::array<long long,4001> es{};
		std::array<bool,4001> esadup{};
		for (unsigned i = 0; i < n; i++) {
			std::cin >> e >> p >> q;
			es.at(e) += p * q;
			if (es.at(e) >= 1000000 && ! esadup.at(e)) {
				std::cout << e << std::endl;
				esadup.at(e) = true;
				isna = false;
			}
		}
		//for_each_withindex(es.begin(), es.end(), [&isna](long long sell,long long e){ 
		//		if (sell>=1000000) {
		//		std::cout << sell << ":";
		//		std::cout << e << std::endl;
		//		isna = false;
		//		}});
		if (isna) {
			std::cout << "NA" << std::endl;
		}

	}
	return 0;
}