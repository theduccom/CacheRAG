#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main() {
	int n;	
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int size=4;
		std::string a, b;
		std::vector<int> va, vb, out;
		std::cin >> a >> b;
		for (std::string::iterator aitr = a.begin(); aitr != a.end(); aitr++) {
			va.push_back((int)*aitr - '0');
		}
		for (std::string::iterator bitr = b.begin(); bitr != b.end(); bitr++) {
			vb.push_back((int)*bitr - '0');
		}
		std::reverse(va.begin(), va.end()); std::reverse(vb.begin(), vb.end());
		out.push_back(0);
		size = va.size() > vb.size() ? va.size() : vb.size();
		for (int i = 0; i < size; i++) {
			out[i] = out[i] + (i < va.size() ? va[i] : 0) + (i < vb.size() ? vb[i] : 0);
			if (out[i] > 9) {
				out[i] = out[i] % 10;
				out.push_back(1);
			}
			else {
				out.push_back(0);
			}
		}
		if (out.back() == 0) out.pop_back();
		if (out.size() > 80) std::cout << "overflow" << std::endl;
		else {
			std::reverse(out.begin(), out.end());
			for (std::vector<int>::iterator itr = out.begin(); itr != out.end(); itr++) {
				std::cout << *itr;
			}
			std::cout << std::endl;
		}
	}
}