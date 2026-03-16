#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s[55][2];
	int ans[100],k,i,p,q;
	bool flag;
	cin >> q;
	for(p=0; p<q; p++){
		cin >> s[p][0];
		cin >> s[p][1];
		fill(ans,ans+100,0);
		if( s[p][0].length()>80 || s[p][1].length()>80 ){
			cout << "overflow" << endl;
			continue;
		}
		for(k=0; k<2; k++){
			reverse(s[p][k].begin(),s[p][k].end());
			for(i=(s[p][k].length()-1); i>=0; i--){
				ans[i] += (s[p][k][i] - '0');
			}
		}
		for(i=0; i<80; i++){
			ans[i+1] += (ans[i]/10);
			ans[i] %= 10;
		}
		flag = true;
		for(i=99; i>79; i--){
			if(ans[i] != 0){
				cout << "overflow" << endl;
				flag = false;
				break;
			}
		}
		if(!flag){
			continue;
		}
		flag = false;
		for(i=79; i>=0; i--){
			if(flag){
				cout << ans[i];
			}else if(ans[i]!=0){
				cout << ans[i];
				flag = true;
			}
		}
		if(!flag){
			cout << "0";
		}
		cout << endl;
	}
	return 0;
}