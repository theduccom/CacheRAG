#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;

int main(){

	int n, len;
	int cnt[4] = {0};
	string str;
	vector<char> vc;
/*
	while(scanf("%d, %s", &n, str) != EOF){
		for(int i=0; i<4; i++){
			if(str == blood[i]){
				cnt[i]++;
				break;
			}
			str = "";
		}
	}
	
	for(int i=0; i<4; i++){
		cout << cnt[i] << endl;
	}
*/

	while(getline(cin, str)){
		int valid = 0;
		len = str.length();
		for(int i=0; i<len; i++){
			if(str[i] == ','){
				valid = 1;
			}
			else if(valid == 1){
				if(str[i+1] == 'B') cnt[2]++;
				else if(str[i] == 'A') cnt[0]++;
				else if(str[i] == 'B') cnt[1]++;
				else cnt[3]++;
				break;
			}
		}
		str = "";
	}
	
	for(int i=0; i<4; i++){
		cout << cnt[i] << endl;
	}

	return 0;
	
}