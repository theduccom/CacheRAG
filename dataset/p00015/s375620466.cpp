#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <cstdlib>
#include <algorithm>

#define MAX_DIGIT 80
#define ERROR ("overflow")

int main(void){
	using namespace std;

	int N;
	cin >> N;

	list< pair<string,string> > input;

	for(int i=1; i<=N; i++){

		string slhs, srhs;
		cin >> slhs >> srhs;

		reverse(slhs.begin(), slhs.end());
		reverse(srhs.begin(), srhs.end());

		input.push_back(make_pair(slhs,srhs));

	}

	for(auto p=input.begin(); p!=input.end(); p++){

		auto slhs = p->first, srhs = p->second;
		if(slhs.size()>MAX_DIGIT || srhs.size()>MAX_DIGIT){
			cout << ERROR << endl;
			continue;
		}

		int headDigit = std::max(slhs.size(),srhs.size());
		vector<int> lhs(headDigit), rhs(headDigit);
		list<int> res;

		auto atoi_digit = [] (char x) -> int {
			return atoi(&x);
		};
		transform(slhs.begin(), slhs.end(), lhs.begin(), atoi_digit);
		transform(srhs.begin(), srhs.end(), rhs.begin(), atoi_digit);

		int carry = 0;
		for (auto itr=lhs.begin(); itr!=lhs.end(); itr++){
			int index = itr - lhs.begin();
			auto d = div(lhs[index]+rhs[index]+carry,10);
			carry = d.quot;
			res.push_back(d.rem);
		}

		if(headDigit==MAX_DIGIT && carry !=0){
			cout << ERROR << endl;
		}
		else{
			if (carry!=0){
				res.push_back(carry);
			}
			for(auto itr=res.rbegin(); itr!=res.rend();itr++){
				cout << *itr;
			}
			cout << endl;
		}

	}
}