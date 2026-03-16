#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

	map <char, int> mp;
	mp['I'] = 1;
	mp['V'] = 5;
	mp['X'] = 10;
	mp['L'] = 50;
	mp['C'] = 100;
	mp['D'] = 500;
	mp['M'] = 1000;


	string p;

	while (cin >> p){
		int p_buf = 0;
		int ans[3] = { 0, 0, 0 };

		for (int i = 0; i < p.size(); i++){
			if (mp[p[i]] > p_buf){
				ans[2] = mp[p[i]] - p_buf + ans[0];
			}
			else{
				ans[2] = mp[p[i]] + ans[1];
			}
			ans[0] = ans[1];
			ans[1] = ans[2];
			p_buf = mp[p[i]];
			//cout << ans[2] << ",";
		}
		//cout << endl;

		cout << ans[2] << endl;

	}

	return 0;
}