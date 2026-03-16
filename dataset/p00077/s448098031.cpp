#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

string EncodeRunLength(string rls){
	string sret;

	for(unsigned int i = 0; i < rls.length(); i++){
		if( rls[i] == '@'){
			int num = rls[i+1]-'0';
			for(int j = 0; j < num; j++) sret += rls[i+2];
			i+=2;
		}else sret += rls[i];
	}

	return sret;
}

int main(void){
	while( true ){
		char buf[128];
		string s;

		if( EOF == scanf("%s",buf) ) break;
		s = buf;

		cout << EncodeRunLength( s ) << endl;
	}
	return 0;
}