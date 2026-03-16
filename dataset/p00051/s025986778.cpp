#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	
	int N;
	string str;
	cin >> N;
	
	while(N--){
		cin >> str;
		for( int i=0 ; i<str.size() ; i++ ){
			for( int j=i+1 ; j<str.size() ; j++ ){
				if( str[i] < str[j] ) swap( str[i] , str[j] );
			}
		}
		
		int p = 1;
		int numA = 0 ,numB = 0;
		for( int i=0 ; i<str.size() ; i++ ){
			numA += (str[i]-'0')*p;
			numB += (str[str.size()-i-1]-'0')*p;
			p*=10;
		}
		
		cout << numB - numA << endl ;
	}
	
	return 0;
}