#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int N;
	string str, str2;
	int ans_size, up, num;
	vector<int> ans;
	
	cin >> N;
	for(int n = 0; n < N; n++){
		cin >> str >> str2;
		
		up = 0;
		for(int i = 0; ; i++){
			if(i >= str.size() && i >= str2.size()){
				if(up > 0) ans.push_back(up);
				break;
			}
			num = 0;
			if(i < str.size()) num += str[str.size() - 1 - i] - 48;
			if(i < str2.size()) num += str2[str2.size() - 1 - i] - 48;
			ans.push_back((num + up) % 10);
			up = (num + up) / 10;
		}
		
		if(ans.size() > 80){
			cout << "overflow";
		}
		else{
			for(int i = ans.size() - 1; i >= 0; i--){
				cout << ans[i];
			}
		}
		cout << endl;
		ans.clear();
	}
	
	return 0;
}