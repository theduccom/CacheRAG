#include<iostream>
#include<string>
using namespace std;

int main(){
	string in;
	while( getline(cin,in), in.length() ){
		for( int i=0; i<in.length(); i++ ){
			if( in[i] == '@' ){
				char n = in[++i] - '0';
				char c = in[++i];
				for( int j=0; j<n; j++ )
					cout << c;
			}else
				cout << in[i];
		}
		cout << endl;
	}
	return 0;
}