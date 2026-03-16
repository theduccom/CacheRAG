#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.get(); // ツ凝ウツ板陳づーツ偲ヲツ督セツつオツづ按つ「ツづ出ツ療債つェツつィツつゥツつオツつュツづ按づゥ
	for(int j=0; j<n; j++){
		string s;
		while(getline(cin,s)){
		string ans="";
		for(string::size_type i=0; i<s.size(); i++){
			if(s.substr(i,7) == "Hoshino"){
				ans+="Hoshina";
				i+=6;                    // ツ置ツ環キツつオツつスツ閉カツつセツつッツ進ツづ淞づゥ
			}
			else ans+=s[i];
		}
		cout << ans << endl;
		}
	}
	return 0;
}