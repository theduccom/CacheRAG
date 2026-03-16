#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string str;
	cin >> n;
	while(n--){
		int ans = 0, out = 0, per = 0;
		while(1){
			cin >> str;
			if(str[1] == 'I'){
				per++;
				if(per > 3){per--;ans++;}
			}
			if(str[1] == 'O'){
				ans += per + 1;
				per = 0;
			}
			if(str[1] == 'U' && ++out == 3)break;
			//cout << per << ans << endl;
		}
		cout << ans << endl;
	}
}