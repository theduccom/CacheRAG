#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int debug = 0;

int main(void){
	int n;
	int i, j;
	int len, tmp, carry;
	string str1, str2, str3, hoge;
	vector<int> num1, num2, sum;

	cin >> n;
	for(i=0;i<n;i++){


		//getline(cin, str1);
		cin >> str1;

		len = str1.size();
		for(j=0;j<len;j++){
			num1.push_back(str1[len - j - 1] - 48); //convert ascii to digit
			if(debug) cout << num1[j] << endl;
		}

		//getline(cin, str2);
		cin >> str2;

		len = str2.size();
		for(j=0;j<len;j++){
			num2.push_back(str2[len - j - 1] - 48); //convert ascii to digit
			if(debug) cout << num2[j] << endl;
		}
		
		len = max(num1.size(), num2.size());
		carry = 0;
		for(j=0;j<len;j++){
			if(num1.size() > (unsigned int)j && num2.size() > (unsigned int)j){
				tmp = num1[j] + num2[j] + carry;
			}else if(num1.size() <= j){
				tmp = num2[j] + carry;
			}else{
				tmp = num1[j] + carry;
			}
			sum.push_back(tmp % 10);
			if(tmp >= 10){
				carry = 1;
			}else{
				carry = 0;
			}
		}
		
		if(carry) sum.push_back(carry);

		if(debug){
			for(j=0;(unsigned int)j<sum.size();j++){
				cout << sum[j];
			}
			cout << endl;
		}

		if(sum.size() > 80){
			cout << "overflow" << endl;
		}else{
			tmp = sum.size();
			str3.reserve(tmp + 1);
			for(j=0;j<tmp;j++){
				str3 += sum[tmp - j - 1] + 48; //convert digit to ascii
			}
			cout << str3 << endl;
		}
		
		if(debug) while(1);
		num1.clear();
		num2.clear();
		sum.clear();
		str1.erase();
		str2.erase();
		str3.erase();
	}

	return 0;
}