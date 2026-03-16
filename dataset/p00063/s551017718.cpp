#include <bits/stdc++.h>
using namespace std;
int main(){
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string str;
	int count{0};
	
	while(cin >> str){
		string tmp;
		for(int i=0; i<(int)str.size(); i++){
			tmp.push_back(str[i]);
		}
		reverse(tmp.begin(), tmp.end());
		if(str == tmp){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}