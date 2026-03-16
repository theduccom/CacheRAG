#include<iostream>
#include<string>

using namespace std;

int main(void){
	int cnt = 0;
	while( true ){
		string s;
		string s1, s2;

		cin >> s;
		if( cin.eof() ) break;

		if( s.length() % 2 == 0 ){
			for(int i = 0; i < s.length() / 2; i++) s1 += s[i];
			for(int i = s.length() - 1; i >= s.length() / 2; i--) s2 += s[i];
		}else{
			for(int i = 0; i < s.length() / 2; i++) s1 += s[i];
			for(int i = s.length() - 1; i > s.length() / 2; i--) s2 += s[i];
		}

		if( s1.compare( s2 ) == 0 ) cnt++;
	}

	cout << cnt << endl;
	return 0;
}