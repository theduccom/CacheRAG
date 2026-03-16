#include<iostream>
#include<string>
using namespace std;

int pow( int n, int i ){
	int ret = 1;
	for( int j=0; j<i; j++ )
		ret *= n;
	return ret;
}

int getMax( string str ){
	int ret=0;
	for( int i=0; i<8; i++ ){
		int m=0;
		for( int j=0; j<8; j++ ){
			if( str[m] < str[j] )	m = j;
		}
		ret += pow(10,(7-i))*(str[m]-'0');
		str[m] = '0'-1;
	}
	return ret;
}

int getMin( string str ){
	int ret=0;
	for( int i=0; i<8; i++ ){
		int m=0;
		for( int j=0; j<8; j++ ){
			if( str[m] > str[j] )	m = j;
		}
		ret += pow(10,(7-i))*(str[m]-'0');
		str[m] = '9'+1;
	}
	return ret;
}

int main(){
	int n;
	string str;
	getline( cin, str );
	sscanf( str.c_str(), "%d", &n );
	
	for( int i=0; i<n; i++ ){
		getline( cin, str );
		int max = getMax( str );
		int min = getMin( str );
		cout << max-min << endl;
	}
	return 0;
}