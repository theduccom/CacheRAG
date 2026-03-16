#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

#define reep(i,n,m) for(int i=(n);i<(m);i++)
#define rep(i,n) reep(i,0,n)

using namespace std;

//algorithm
//string
class BigInteger{
private:
public:
	string number;
	
	BigInteger(string number):number(number){}
	
	BigInteger operator+(BigInteger integer){
		reverse(number.begin(), number.end());
		reverse(integer.number.begin(), integer.number.end());
		
		int length = max(	integer.number.length(),
							number.length());
	
		int up=0;
	
		string sum="";
	
		for(int i=0;i<length;i++){
			int num1 = 0;
			if(i<integer.number.length()){
				num1 = integer.number[i]-'0';
			}
			int num2 = 0;
			if(i<number.length()){
				num2 = number[i]-'0';
			}
			int n = num1+num2+up;
			if(n<10){
				up=0;
			}else{
				up=1;
				n-=10;
			}
			sum += (char)('0'+n);
		}
		if(up){
			sum += '1';
		}
		reverse(sum.begin(), sum.end());
		return sum;
	}
};

int main(){
	int N;
	cin >> N;
	while(N--){
		string num1,num2;
		cin >> num1 >> num2;
		BigInteger integer = BigInteger(num1) + BigInteger(num2);
		if(integer.number.length()>80){
			puts("overflow");
		}else{
			cout << integer.number << endl;
		}
	}
}