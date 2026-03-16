#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>


using namespace std;

string s,ans="";
int p=0;
string c,d;
int cou;


int string_num(string str) {
	stringstream sstream;
	int n;
	sstream << str;
	sstream >> n;
	return n;
}


int main(){
	while(cin >> s){
		ans = "";
		p=0;

		while(s[p] != '\0'){
			if(s[p] != '@'){
				ans += s[p];
			}else{
				c = s[++p];
				cou = string_num(c);
				p++;
				for(int i=0;i<cou;i++){
					ans += s[p];
				}

			}
			p++;
		}
		cout << ans << endl;


	}

}