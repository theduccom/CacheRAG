#include <iostream>
#include <string>

using namespace std;

int main(){
	int answer = 0;
	string s;
	while(getline(cin, s)){
		int i = 0, j = s.size() - 1;
		bool accept = true;
		while(accept && i < j){
			if(s[i] != s[j]){ accept = false; }
			++i; --j;
		}
		if(accept){ ++answer; }
	}
	cout << answer << endl;
	return 0;
}