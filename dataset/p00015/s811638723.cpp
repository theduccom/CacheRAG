#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

#define MAX_DIGIT 80
#define ERROR ("overflow")



int main(void){
	using namespace std;

	int N;
	cin >> N;

	vector< pair<string,string> > input;
	input.reserve(N);

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

		int lhs[MAX_DIGIT], rhs[MAX_DIGIT], res[MAX_DIGIT];
		fill(lhs, lhs+MAX_DIGIT, 0);
		fill(rhs, rhs+MAX_DIGIT, 0);
		fill(res, res+MAX_DIGIT, 0);
		auto atoi_digit = [] (char x) -> int {
			return atoi(&x);
		};
		transform(slhs.begin(), slhs.end(), lhs, atoi_digit);
		transform(srhs.begin(), srhs.end(), rhs, atoi_digit);

		int headDigit;
		for (headDigit=MAX_DIGIT-1; headDigit>=0; headDigit--){
			if(lhs[headDigit]!=0 || rhs[headDigit]!=0){
				break;
			}
		}
		if(headDigit != MAX_DIGIT-1){
			headDigit++;
		}

		int carry = 0;
		for (int j=0; j<=headDigit; j++){
			auto d = div(lhs[j]+rhs[j]+carry,10);
			carry = d.quot;
			res[j] = d.rem;
		}
		if(headDigit==MAX_DIGIT-1 && carry !=0){
			cout << ERROR << endl;
			continue;
		}


		for (; headDigit>=1; headDigit--){
			if(res[headDigit]!=0){
				break;
			}
		}
		for (int j=headDigit; j>=0; j--){
			cout << res[j];
		}
		cout << endl;
	}
}