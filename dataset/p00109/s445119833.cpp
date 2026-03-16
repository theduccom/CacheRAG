#include <iostream>
#include <string>
using namespace std;

string s;

int si(int&);
int fi(int&);
int so(int&);

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> s;
		int pos = 0;
		cout << so(pos) << endl;
	}

	return 0;
}
int so(int& pos){
	int ans = fi(pos);
	while (s[pos] != '=' && s[pos] != ')'){
		if (s[pos] == '+'){
			ans += fi(++pos);
		}
		else if (s[pos] == '-'){
			ans -= fi(++pos);
		}
	}
	pos++;
	return ans;
}
int fi(int& pos){
	int ans = si(pos);
	while (1){
		if (s[pos] == '*'){
			ans *= si(++pos);
		}
		else if (s[pos] == '/'){
			ans /= si(++pos);
		}
		else {
			return ans;
		}
	}
}

int si(int& pos){
	if (s[pos] != '('){
		int ans = 0;
		while ('0' <= s[pos] && s[pos] <= '9'){
			ans *= 10;
			ans += s[pos] - 48;
			pos++;
		}
		return ans;
	}
	else{
		return so(++pos);
	}
}