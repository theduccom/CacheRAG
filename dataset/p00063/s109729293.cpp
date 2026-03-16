#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	int ans = 0;

	while (cin >> str){
		int i = 0;
		int n = str.size();
		int a = 1;
		while (i * 2 < n){
			if (str[i] != str[n - i - 1]){
				a = 0;
				break;
			}
			i++;
		}
		if (a)
			ans++;
	}
	cout << ans << endl;
	return 0;
}