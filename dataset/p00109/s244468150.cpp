#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void select_cal(char c, int *tmp, int val){

	if(c == '+') *tmp += val;
	else if(c == '-') *tmp -= val;
	else if(c == '*') *tmp = floor(*tmp * val);
	else if(c == '/' && val != 0) *tmp = floor(*tmp / val);

}

int calculation(string str, int len, int begin){

	int ans, tmp, cnt, val;
	char c;
	
	ans = 0;
	tmp = 0;
	c = '+';

	for(int i=begin; i<len; i++){
		if(str[i] == '+' || str[i] == '-'){
			ans += tmp;
			tmp = 0;
			c = str[i];
		}
		else if(str[i] == '*' || str[i] == '/'){
			c = str[i];
		}
		else if(str[i] == '('){
			select_cal(c, &tmp, calculation(str, len, i+1));
			cnt = 1;
			do{
				i++;
				if(str[i] == '(') cnt++;
				else if(str[i] == ')') cnt--;
			}while(cnt != 0);
		}
		else if(str[i] == ')' || str[i] == '='){
			break;
		}
		else {
			cnt = 1;
			while(str[i+cnt] >= '0' && str[i+cnt] <= '9'){
				cnt++;
			}
			val = 0;
			for(int j=0; j<cnt; j++){
				val += (str[i+cnt-j-1] - '0') * pow(10, j);
			}
			select_cal(c, &tmp, val);
			i += cnt - 1;
		}
	}
	ans += tmp;

	return ans;

}

int main(){

	int n;
	string str;
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> str;
		cout << calculation(str, str.length(), 0) << endl;
	}

	return 0;

}