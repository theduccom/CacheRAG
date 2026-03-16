#include <iostream>
#include <string>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

string Caesar(string str, int shift){
    string ret="";
    REP(i, str.size()){
        if('a'<=str[i] && str[i]<='z') ret += (str[i] - 'a' + shift) % 26 + 'a';
        else ret+=str[i];
    }
    return ret;
}

int main(){
	string str;
	while(getline(cin, str, '\n')){
		REP(i, 26){
			string fix = Caesar(str, i);
	    	if( fix.find( "the", 0 ) != string::npos ||
	    		fix.find( "this", 0 ) != string::npos ||
	    		fix.find( "that", 0 ) != string::npos ){
				cout<<fix<<endl;
				break;
			}
		}
	}
	return 0;
}