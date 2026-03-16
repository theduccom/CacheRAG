#include<string>
using namespace std;
string replace(string s, string f, string t){
	string r;
	for(int p=0;(p=s.find(f))!=s.npos;){
		r+=s.substr(0,p)+t;
		s=s.substr(p+f.size());
	}
	return r+s;
}
int main(){
	string s;
	while(getline(cin,s)){
		s=replace(s,"peach","APPLE"); s=replace(s,"apple","PEACH");
		s=replace(s,"APPLE","apple"); s=replace(s,"PEACH","peach");
		cout<<s<<endl;
	}
	return 0;
}