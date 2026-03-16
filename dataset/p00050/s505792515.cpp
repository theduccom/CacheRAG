#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string str;
	string match[2] = {
		"apple",
		"peach"
	};
	
	getline(cin,str);
	for( int i=0 ; str.size()-i >= 5 ; i++ ){
		if( str[i] == 'a' || str[i] == 'p' ){
			for( int j=0 ; j<2 ; j++ ){
				int cnt = 0;
				for( int k=0 ; k<5 ; k++ ){
					cnt += (str[i+k]==match[j][k]);
				}
				if( cnt == 5 ){
					for( int k=0 ; k<5 ; k++ ){
						str[i+k] = match[(j+1)%2][k];
					}
					i+=4;
					break;
				}
			}
		}
	}
	cout << str << endl ;
	
	return 0 ;
}