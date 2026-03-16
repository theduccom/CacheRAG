#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		string a, b;
		bool cu = false;
		cin >> a >> b;
		int al = a.length(), bl = b.length(), ans[101] = {0};
		for(int i = 0; i < min(al, bl); i++){
			ans[i] = a[al-i-1] + b[bl-i-1] - 48 * 2;
			if(cu) ans[i]++;
			if(ans[i] >= 10){
				ans[i] %= 10;
				cu = true;
			}else cu = false;
		}
		for(int i = min(al, bl); i < max(al, bl); i++){
			if(al > bl) ans[i] = a[al-i-1] - 48 + cu;
			else ans[i] = b[bl-i-1] - 48 + cu;
			if(ans[i] >= 10){
				ans[i] %= 10;
				cu = true;
			}else cu = false;
		}
		if(cu) ans[max(al, bl)] = 1;
		if(max(al, bl)+cu > 80) cout << "overflow";
		else for(int i = (cu? max(al, bl):max(al, bl)-1); i >= 0; i--) cout << ans[i];
		cout << endl;
	}
	return 0;
}