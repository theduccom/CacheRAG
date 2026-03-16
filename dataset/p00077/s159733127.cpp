#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){

	string s;
	while(cin>>s){
		string ns;
		for(int i = 0; i < s.size(); i++){
			if(s[i]=='@'){
				string ss=s.substr(i+1,2);
				for(int i = 0; i < ss[0]-'0'; i++){
					ns+=ss[1];
				}
				i+=2;
			}
			else{
				ns+=s[i];
			}
		}
		cout<<ns<<endl;
	}

	return 0;
}