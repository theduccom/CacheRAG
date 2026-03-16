#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int T;
	cin >> T;
	while(T--){
		//char s[100] = "abc";
		string a,b;
		
		cin >> a >> b;
		if(a==b){
			if(a=="0"){
			cout<<"0"<<endl;
				continue;
			}
		}
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		while( a.size() < 100 ) a += "0";
		while( b.size() < 100 ) b += "0";
		string ans = "";
		int carry = 0;
		for(int i = 0 ; i < 100 ; i++){
			int d = (a[i]-'0') + (b[i]-'0') + carry;
			ans += d % 10 + '0';
			carry = d / 10;
		}
		reverse(ans.begin(),ans.end());
		if(ans.find_first_not_of('0')<20){
			cout << "overflow" << endl;
			continue;
		}
		ans = ans.substr(ans.find_first_not_of('0') );
		
		cout << ans << endl;
	}
	
	return 0;
}