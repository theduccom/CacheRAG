#include <iostream>
#include <algorithm>

using namespace std;

void tasu(string s1, string s2){
	int num[2][max(s1.length(), s2.length())+1];
	for(int i = 0; i < sizeof(num[0])/sizeof(int); i++){
		if(s1.length() > i){
			num[0][i] = (int)s1.at(s1.length()-1-i) - (int)'0';
		}else{
			num[0][i] = 0;
		}
		if(s2.length() > i){
			num[1][i] = (int)s2.at(s2.length()-1-i) - (int)'0';
		}else{
			num[1][i] = 0;
		}
	}
	for(int i = 0; i < sizeof(num[0])/sizeof(int)-1; i++){
		num[1][i] += num[0][i];
		if(num[1][i] > 9){
			num[1][i+1] += (int)(num[1][i]/10);
			num[1][i] %= 10;
		}
	}
	int keta = sizeof(num[0])/sizeof(int);
	while(keta && !num[1][keta-1]){
		keta--;
	} 
	if(keta > 80){
		cout << "overflow" << endl;
	}else if(keta){
		while(keta--){
			cout << num[1][keta];
		}
		cout << endl;
	}else{
		cout << 0 << endl;
	}
}
int main(){
	int n;
	cin >> n;
	while(n--){
		string s1, s2;
		cin >> s1 >> s2;
		tasu(s1, s2);
	}
}