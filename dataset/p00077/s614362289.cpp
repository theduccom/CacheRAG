#include<iostream>
using namespace std;

int main(){
	string s,t;
	while(cin >> s){
		t = "";
		for(int i=0;i<s.size();++i){
			if(s[i]=='@'){
				for(int j=0;j<s[i+1]-'0';++j)
					t+=s[i+2];
				i+=2;
			}
			else
			t+=s[i];
		}
		cout << t << endl;
	}
}