#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n,m;
	string aindex, bindex, ans;
	cin >> m;
	n = 0;
	string a,b;
	for(int j = 0; j < m; j++){
		cin >> a >> b;
		if(a.size() > 80||b.size() > 80){
			cout << "overflow" << endl;
		}else{
			for(int i = 0; i< max(a.size(),b.size()); i++){
				if(a.size()>= i+1){
					aindex = a[a.size()-i-1];
				}else{
					aindex = "0";
				}
				if(b.size() >= i+1){
					bindex = b[b.size()-i-1];
				}else{
					bindex = "0";
				}
				n = stoi(aindex) + stoi(bindex) + (n-n%10==10);
				aindex = to_string(n%10);
				ans = aindex + ans;
			}

			if(n-n%10 == 10){
				ans = '1' + ans;
			}

			if(ans.size() > 80){
				cout << "overflow" << endl;
			}else{
				cout << ans << endl;
			}

		}
		ans ="";
		n = 0;
	}
	return 0;
}