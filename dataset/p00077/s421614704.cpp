//AOJ0077

#include<iostream>
#include<string>
int main(){
	std::string s;
	while (std::cin >> s){
		std::string ans;
		for (int i = 0; i < s.size(); ++i){
			if (s[i] == '@'){
				std::string p(s[i + 1] - '0', s[i + 2]);
				ans.append(p);
				i += 2;
			}
			else{
				ans.push_back(s[i]);
			}
		}
		std::cout << ans << std::endl;
	}
}