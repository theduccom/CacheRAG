#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string s1, s2;
	int n, n1[100], n2[100];cin >> n;
	for(int g = 0;g < n;g++){
		cin >> s1 >> s2;
		for(int i = 0;i < 100;i++)n1[i] = n2[i] = 0;
		if(s1.size()>80 || s2.size()>80){
			cout << "overflow" << endl;
			continue;
		}
		for(int i = 0;i < s1.size();i++)n1[i] = s1[s1.size()-i-1] - '0';
		for(int i = 0;i < s2.size();i++)n2[i] = s2[s2.size()-i-1] - '0';
		
		for(int i = 0;i < 90;i++){
			n1[i] += n2[i];
			if(n1[i] > 9){n1[i] = n1[i]%10;n1[i+1]++;}
		}
		int flag = 0;
		for(int i = 90;i >= 0;i--){
			if(!flag && i == 0){cout << n1[0];break;}
			if(flag && i >= 80){flag = 2;break;}
			if(flag)cout << n1[i];
			if(!flag && i > 0 && n1[i-1] != 0)flag = 1;
		}
		if(flag == 2)cout << "overflow";
		cout << endl;
	}
	return 0; 
}