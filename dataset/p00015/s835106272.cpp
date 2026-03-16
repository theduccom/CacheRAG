#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int rep=0; rep<n; rep++){
		string str[3];
		cin >> str[0] >> str[1];
		int ml = max(str[0].length(), str[1].length())+1;
		for(int i=0; i<2; i++){
			reverse(str[i].begin(), str[i].end());
			int len = str[i].length();
			for(int j=0; j<ml-len; j++){
				str[i] += "0";
			}
		}
		str[2] = "";
		int c=0;
		for(int i=0; i<ml; i++){
			int n = (str[0][i]-'0')+(str[1][i]-'0')+c;
			if(n>9) c=1;
			else c=0;
			str[2] += n%10 +'0';
		}
		if(str[2].back()=='0') str[2].pop_back();
		reverse(str[2].begin(), str[2].end());
		if(str[2].length() > 80){
			cout << "overflow" << endl;
		}else{
			cout << str[2] << endl;
		}
	}
	return 0;
}